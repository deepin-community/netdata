// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef NETDATA_LOCKS_H
#define NETDATA_LOCKS_H 1

#include "../libnetdata.h"
#include "../clocks/clocks.h"

typedef pthread_mutex_t netdata_mutex_t;
#define NETDATA_MUTEX_INITIALIZER PTHREAD_MUTEX_INITIALIZER

typedef struct netdata_spinlock {
    bool locked;
#ifdef NETDATA_INTERNAL_CHECKS
    pid_t locker_pid;
    size_t spins;
#endif
} SPINLOCK;

#define NETDATA_SPINLOCK_INITIALIZER \
    { .locked = false }

void spinlock_init(SPINLOCK *spinlock);
void spinlock_lock(SPINLOCK *spinlock);
void spinlock_unlock(SPINLOCK *spinlock);
bool spinlock_trylock(SPINLOCK *spinlock);

typedef struct netdata_rw_spinlock {
    int32_t readers;
    SPINLOCK spinlock;
} RW_SPINLOCK;

#define NETDATA_RW_SPINLOCK_INITIALIZER \
    { .readers = 0, .spinlock = NETDATA_SPINLOCK_INITIALIZER }

void rw_spinlock_init(RW_SPINLOCK *rw_spinlock);
void rw_spinlock_read_lock(RW_SPINLOCK *rw_spinlock);
void rw_spinlock_read_unlock(RW_SPINLOCK *rw_spinlock);
void rw_spinlock_write_lock(RW_SPINLOCK *rw_spinlock);
void rw_spinlock_write_unlock(RW_SPINLOCK *rw_spinlock);
bool rw_spinlock_tryread_lock(RW_SPINLOCK *rw_spinlock);
bool rw_spinlock_trywrite_lock(RW_SPINLOCK *rw_spinlock);

#ifdef NETDATA_TRACE_RWLOCKS

typedef enum {
    RWLOCK_REQUEST_READ = (1 << 0),
    RWLOCK_REQUEST_WRITE = (1 << 1),
    RWLOCK_REQUEST_TRYREAD = (1 << 2),
    RWLOCK_REQUEST_TRYWRITE = (1 << 3),
} LOCKER_REQUEST;

typedef struct netdata_rwlock_locker {
    LOCKER_REQUEST lock;
    bool got_it;
    pid_t pid;
    size_t refcount;
    const char *tag;
    const char *file;
    const char *function;
    unsigned long line;
    struct netdata_rwlock_locker *next, *prev;
} netdata_rwlock_locker;

typedef struct netdata_rwlock_t {
    pthread_rwlock_t rwlock_t;       // the lock
    size_t readers;                  // the number of reader on the lock
    size_t writers;                  // the number of writers on the lock
    netdata_mutex_t lockers_mutex;   // a mutex to protect the linked list of the lock holding threads
    netdata_rwlock_locker *lockers;  // the linked list of the lock holding threads
    Pvoid_t lockers_pid_JudyL;
} netdata_rwlock_t;

#define NETDATA_RWLOCK_INITIALIZER {                \
        .rwlock_t = PTHREAD_RWLOCK_INITIALIZER,     \
        .readers = 0,                               \
        .writers = 0,                               \
        .lockers_mutex = NETDATA_MUTEX_INITIALIZER, \
        .lockers = NULL,                            \
        .lockers_pid_JudyL = NULL,                  \
    }

#else // NETDATA_TRACE_RWLOCKS

typedef struct netdata_rwlock_t {
    pthread_rwlock_t rwlock_t;
} netdata_rwlock_t;

#define NETDATA_RWLOCK_INITIALIZER { \
        .rwlock_t = PTHREAD_RWLOCK_INITIALIZER \
    }

#endif // NETDATA_TRACE_RWLOCKS

int __netdata_mutex_init(netdata_mutex_t *mutex);
int __netdata_mutex_destroy(netdata_mutex_t *mutex);
int __netdata_mutex_lock(netdata_mutex_t *mutex);
int __netdata_mutex_trylock(netdata_mutex_t *mutex);
int __netdata_mutex_unlock(netdata_mutex_t *mutex);

int __netdata_rwlock_destroy(netdata_rwlock_t *rwlock);
int __netdata_rwlock_init(netdata_rwlock_t *rwlock);
int __netdata_rwlock_rdlock(netdata_rwlock_t *rwlock);
int __netdata_rwlock_wrlock(netdata_rwlock_t *rwlock);
int __netdata_rwlock_unlock(netdata_rwlock_t *rwlock);
int __netdata_rwlock_tryrdlock(netdata_rwlock_t *rwlock);
int __netdata_rwlock_trywrlock(netdata_rwlock_t *rwlock);

void netdata_thread_disable_cancelability(void);
void netdata_thread_enable_cancelability(void);

#ifdef NETDATA_TRACE_RWLOCKS

int netdata_mutex_init_debug( const char *file, const char *function, const unsigned long line, netdata_mutex_t *mutex);
int netdata_mutex_destroy_debug( const char *file, const char *function, const unsigned long line, netdata_mutex_t *mutex);
int netdata_mutex_lock_debug( const char *file, const char *function, const unsigned long line, netdata_mutex_t *mutex);
int netdata_mutex_trylock_debug( const char *file, const char *function, const unsigned long line, netdata_mutex_t *mutex);
int netdata_mutex_unlock_debug( const char *file, const char *function, const unsigned long line, netdata_mutex_t *mutex);

int netdata_rwlock_destroy_debug( const char *file, const char *function, const unsigned long line, netdata_rwlock_t *rwlock);
int netdata_rwlock_init_debug( const char *file, const char *function, const unsigned long line, netdata_rwlock_t *rwlock);
int netdata_rwlock_rdlock_debug( const char *file, const char *function, const unsigned long line, netdata_rwlock_t *rwlock);
int netdata_rwlock_wrlock_debug( const char *file, const char *function, const unsigned long line, netdata_rwlock_t *rwlock);
int netdata_rwlock_unlock_debug( const char *file, const char *function, const unsigned long line, netdata_rwlock_t *rwlock);
int netdata_rwlock_tryrdlock_debug( const char *file, const char *function, const unsigned long line, netdata_rwlock_t *rwlock);
int netdata_rwlock_trywrlock_debug( const char *file, const char *function, const unsigned long line, netdata_rwlock_t *rwlock);

#define netdata_mutex_init(mutex)    netdata_mutex_init_debug(__FILE__, __FUNCTION__, __LINE__, mutex)
#define netdata_mutex_destroy(mutex) netdata_mutex_init_debug(__FILE__, __FUNCTION__, __LINE__, mutex)
#define netdata_mutex_lock(mutex)    netdata_mutex_lock_debug(__FILE__, __FUNCTION__, __LINE__, mutex)
#define netdata_mutex_trylock(mutex) netdata_mutex_trylock_debug(__FILE__, __FUNCTION__, __LINE__, mutex)
#define netdata_mutex_unlock(mutex)  netdata_mutex_unlock_debug(__FILE__, __FUNCTION__, __LINE__, mutex)

#define netdata_rwlock_destroy(rwlock)   netdata_rwlock_destroy_debug(__FILE__, __FUNCTION__, __LINE__, rwlock)
#define netdata_rwlock_init(rwlock)      netdata_rwlock_init_debug(__FILE__, __FUNCTION__, __LINE__, rwlock)
#define netdata_rwlock_rdlock(rwlock)    netdata_rwlock_rdlock_debug(__FILE__, __FUNCTION__, __LINE__, rwlock)
#define netdata_rwlock_wrlock(rwlock)    netdata_rwlock_wrlock_debug(__FILE__, __FUNCTION__, __LINE__, rwlock)
#define netdata_rwlock_unlock(rwlock)    netdata_rwlock_unlock_debug(__FILE__, __FUNCTION__, __LINE__, rwlock)
#define netdata_rwlock_tryrdlock(rwlock) netdata_rwlock_tryrdlock_debug(__FILE__, __FUNCTION__, __LINE__, rwlock)
#define netdata_rwlock_trywrlock(rwlock) netdata_rwlock_trywrlock_debug(__FILE__, __FUNCTION__, __LINE__, rwlock)

#else // !NETDATA_TRACE_RWLOCKS

#define netdata_mutex_init(mutex)    __netdata_mutex_init(mutex)
#define netdata_mutex_destroy(mutex) __netdata_mutex_destroy(mutex)
#define netdata_mutex_lock(mutex)    __netdata_mutex_lock(mutex)
#define netdata_mutex_trylock(mutex) __netdata_mutex_trylock(mutex)
#define netdata_mutex_unlock(mutex)  __netdata_mutex_unlock(mutex)

#define netdata_rwlock_destroy(rwlock)    __netdata_rwlock_destroy(rwlock)
#define netdata_rwlock_init(rwlock)       __netdata_rwlock_init(rwlock)
#define netdata_rwlock_rdlock(rwlock)     __netdata_rwlock_rdlock(rwlock)
#define netdata_rwlock_wrlock(rwlock)     __netdata_rwlock_wrlock(rwlock)
#define netdata_rwlock_unlock(rwlock)     __netdata_rwlock_unlock(rwlock)
#define netdata_rwlock_tryrdlock(rwlock)  __netdata_rwlock_tryrdlock(rwlock)
#define netdata_rwlock_trywrlock(rwlock)  __netdata_rwlock_trywrlock(rwlock)

#endif // NETDATA_TRACE_RWLOCKS

#endif //NETDATA_LOCKS_H
