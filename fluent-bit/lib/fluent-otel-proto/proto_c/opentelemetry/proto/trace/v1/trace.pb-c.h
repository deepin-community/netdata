/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: opentelemetry/proto/trace/v1/trace.proto */

#ifndef PROTOBUF_C_opentelemetry_2fproto_2ftrace_2fv1_2ftrace_2eproto__INCLUDED
#define PROTOBUF_C_opentelemetry_2fproto_2ftrace_2fv1_2ftrace_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "opentelemetry/proto/common/v1/common.pb-c.h"
#include "opentelemetry/proto/resource/v1/resource.pb-c.h"

typedef struct Opentelemetry__Proto__Trace__V1__TracesData Opentelemetry__Proto__Trace__V1__TracesData;
typedef struct Opentelemetry__Proto__Trace__V1__ResourceSpans Opentelemetry__Proto__Trace__V1__ResourceSpans;
typedef struct Opentelemetry__Proto__Trace__V1__ScopeSpans Opentelemetry__Proto__Trace__V1__ScopeSpans;
typedef struct Opentelemetry__Proto__Trace__V1__Span Opentelemetry__Proto__Trace__V1__Span;
typedef struct Opentelemetry__Proto__Trace__V1__Span__Event Opentelemetry__Proto__Trace__V1__Span__Event;
typedef struct Opentelemetry__Proto__Trace__V1__Span__Link Opentelemetry__Proto__Trace__V1__Span__Link;
typedef struct Opentelemetry__Proto__Trace__V1__Status Opentelemetry__Proto__Trace__V1__Status;


/* --- enums --- */

/*
 * SpanKind is the type of span. Can be used to specify additional relationships between spans
 * in addition to a parent/child relationship.
 */
typedef enum _Opentelemetry__Proto__Trace__V1__Span__SpanKind {
  /*
   * Unspecified. Do NOT use as default.
   * Implementations MAY assume SpanKind to be INTERNAL when receiving UNSPECIFIED.
   */
  OPENTELEMETRY__PROTO__TRACE__V1__SPAN__SPAN_KIND__SPAN_KIND_UNSPECIFIED = 0,
  /*
   * Indicates that the span represents an internal operation within an application,
   * as opposed to an operation happening at the boundaries. Default value.
   */
  OPENTELEMETRY__PROTO__TRACE__V1__SPAN__SPAN_KIND__SPAN_KIND_INTERNAL = 1,
  /*
   * Indicates that the span covers server-side handling of an RPC or other
   * remote network request.
   */
  OPENTELEMETRY__PROTO__TRACE__V1__SPAN__SPAN_KIND__SPAN_KIND_SERVER = 2,
  /*
   * Indicates that the span describes a request to some remote service.
   */
  OPENTELEMETRY__PROTO__TRACE__V1__SPAN__SPAN_KIND__SPAN_KIND_CLIENT = 3,
  /*
   * Indicates that the span describes a producer sending a message to a broker.
   * Unlike CLIENT and SERVER, there is often no direct critical path latency relationship
   * between producer and consumer spans. A PRODUCER span ends when the message was accepted
   * by the broker while the logical processing of the message might span a much longer time.
   */
  OPENTELEMETRY__PROTO__TRACE__V1__SPAN__SPAN_KIND__SPAN_KIND_PRODUCER = 4,
  /*
   * Indicates that the span describes consumer receiving a message from a broker.
   * Like the PRODUCER kind, there is often no direct critical path latency relationship
   * between producer and consumer spans.
   */
  OPENTELEMETRY__PROTO__TRACE__V1__SPAN__SPAN_KIND__SPAN_KIND_CONSUMER = 5
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(OPENTELEMETRY__PROTO__TRACE__V1__SPAN__SPAN_KIND)
} Opentelemetry__Proto__Trace__V1__Span__SpanKind;
/*
 * For the semantics of status codes see
 * https://github.com/open-telemetry/opentelemetry-specification/blob/main/specification/trace/api.md#set-status
 */
typedef enum _Opentelemetry__Proto__Trace__V1__Status__StatusCode {
  /*
   * The default status.
   */
  OPENTELEMETRY__PROTO__TRACE__V1__STATUS__STATUS_CODE__STATUS_CODE_UNSET = 0,
  /*
   * The Span has been validated by an Application developer or Operator to 
   * have completed successfully.
   */
  OPENTELEMETRY__PROTO__TRACE__V1__STATUS__STATUS_CODE__STATUS_CODE_OK = 1,
  /*
   * The Span contains an error.
   */
  OPENTELEMETRY__PROTO__TRACE__V1__STATUS__STATUS_CODE__STATUS_CODE_ERROR = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(OPENTELEMETRY__PROTO__TRACE__V1__STATUS__STATUS_CODE)
} Opentelemetry__Proto__Trace__V1__Status__StatusCode;

/* --- messages --- */

/*
 * TracesData represents the traces data that can be stored in a persistent storage,
 * OR can be embedded by other protocols that transfer OTLP traces data but do
 * not implement the OTLP protocol.
 * The main difference between this message and collector protocol is that
 * in this message there will not be any "control" or "metadata" specific to
 * OTLP protocol.
 * When new fields are added into this message, the OTLP request MUST be updated
 * as well.
 */
struct  Opentelemetry__Proto__Trace__V1__TracesData
{
  ProtobufCMessage base;
  /*
   * An array of ResourceSpans.
   * For data coming from a single resource this array will typically contain
   * one element. Intermediary nodes that receive data from multiple origins
   * typically batch the data before forwarding further and in that case this
   * array will contain multiple elements.
   */
  size_t n_resource_spans;
  Opentelemetry__Proto__Trace__V1__ResourceSpans **resource_spans;
};
#define OPENTELEMETRY__PROTO__TRACE__V1__TRACES_DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&opentelemetry__proto__trace__v1__traces_data__descriptor) \
    , 0,NULL }


/*
 * A collection of ScopeSpans from a Resource.
 */
struct  Opentelemetry__Proto__Trace__V1__ResourceSpans
{
  ProtobufCMessage base;
  /*
   * The resource for the spans in this message.
   * If this field is not set then no resource info is known.
   */
  Opentelemetry__Proto__Resource__V1__Resource *resource;
  /*
   * A list of ScopeSpans that originate from a resource.
   */
  size_t n_scope_spans;
  Opentelemetry__Proto__Trace__V1__ScopeSpans **scope_spans;
  /*
   * This schema_url applies to the data in the "resource" field. It does not apply
   * to the data in the "scope_spans" field which have their own schema_url field.
   */
  char *schema_url;
};
#define OPENTELEMETRY__PROTO__TRACE__V1__RESOURCE_SPANS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&opentelemetry__proto__trace__v1__resource_spans__descriptor) \
    , NULL, 0,NULL, (char *)protobuf_c_empty_string }


/*
 * A collection of Spans produced by an InstrumentationScope.
 */
struct  Opentelemetry__Proto__Trace__V1__ScopeSpans
{
  ProtobufCMessage base;
  /*
   * The instrumentation scope information for the spans in this message.
   * Semantically when InstrumentationScope isn't set, it is equivalent with
   * an empty instrumentation scope name (unknown).
   */
  Opentelemetry__Proto__Common__V1__InstrumentationScope *scope;
  /*
   * A list of Spans that originate from an instrumentation scope.
   */
  size_t n_spans;
  Opentelemetry__Proto__Trace__V1__Span **spans;
  /*
   * This schema_url applies to all spans and span events in the "spans" field.
   */
  char *schema_url;
};
#define OPENTELEMETRY__PROTO__TRACE__V1__SCOPE_SPANS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&opentelemetry__proto__trace__v1__scope_spans__descriptor) \
    , NULL, 0,NULL, (char *)protobuf_c_empty_string }


/*
 * Event is a time-stamped annotation of the span, consisting of user-supplied
 * text description and key-value pairs.
 */
struct  Opentelemetry__Proto__Trace__V1__Span__Event
{
  ProtobufCMessage base;
  /*
   * time_unix_nano is the time the event occurred.
   */
  uint64_t time_unix_nano;
  /*
   * name of the event.
   * This field is semantically required to be set to non-empty string.
   */
  char *name;
  /*
   * attributes is a collection of attribute key/value pairs on the event.
   * Attribute keys MUST be unique (it is not allowed to have more than one
   * attribute with the same key).
   */
  size_t n_attributes;
  Opentelemetry__Proto__Common__V1__KeyValue **attributes;
  /*
   * dropped_attributes_count is the number of dropped attributes. If the value is 0,
   * then no attributes were dropped.
   */
  uint32_t dropped_attributes_count;
};
#define OPENTELEMETRY__PROTO__TRACE__V1__SPAN__EVENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&opentelemetry__proto__trace__v1__span__event__descriptor) \
    , 0, (char *)protobuf_c_empty_string, 0,NULL, 0 }


/*
 * A pointer from the current span to another span in the same trace or in a
 * different trace. For example, this can be used in batching operations,
 * where a single batch handler processes multiple requests from different
 * traces or when the handler receives a request from a different project.
 */
struct  Opentelemetry__Proto__Trace__V1__Span__Link
{
  ProtobufCMessage base;
  /*
   * A unique identifier of a trace that this linked span is part of. The ID is a
   * 16-byte array.
   */
  ProtobufCBinaryData trace_id;
  /*
   * A unique identifier for the linked span. The ID is an 8-byte array.
   */
  ProtobufCBinaryData span_id;
  /*
   * The trace_state associated with the link.
   */
  char *trace_state;
  /*
   * attributes is a collection of attribute key/value pairs on the link.
   * Attribute keys MUST be unique (it is not allowed to have more than one
   * attribute with the same key).
   */
  size_t n_attributes;
  Opentelemetry__Proto__Common__V1__KeyValue **attributes;
  /*
   * dropped_attributes_count is the number of dropped attributes. If the value is 0,
   * then no attributes were dropped.
   */
  uint32_t dropped_attributes_count;
};
#define OPENTELEMETRY__PROTO__TRACE__V1__SPAN__LINK__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&opentelemetry__proto__trace__v1__span__link__descriptor) \
    , {0,NULL}, {0,NULL}, (char *)protobuf_c_empty_string, 0,NULL, 0 }


/*
 * A Span represents a single operation performed by a single component of the system.
 * The next available field id is 17.
 */
struct  Opentelemetry__Proto__Trace__V1__Span
{
  ProtobufCMessage base;
  /*
   * A unique identifier for a trace. All spans from the same trace share
   * the same `trace_id`. The ID is a 16-byte array. An ID with all zeroes
   * is considered invalid.
   * This field is semantically required. Receiver should generate new
   * random trace_id if empty or invalid trace_id was received.
   * This field is required.
   */
  ProtobufCBinaryData trace_id;
  /*
   * A unique identifier for a span within a trace, assigned when the span
   * is created. The ID is an 8-byte array. An ID with all zeroes is considered
   * invalid.
   * This field is semantically required. Receiver should generate new
   * random span_id if empty or invalid span_id was received.
   * This field is required.
   */
  ProtobufCBinaryData span_id;
  /*
   * trace_state conveys information about request position in multiple distributed tracing graphs.
   * It is a trace_state in w3c-trace-context format: https://www.w3.org/TR/trace-context/#tracestate-header
   * See also https://github.com/w3c/distributed-tracing for more details about this field.
   */
  char *trace_state;
  /*
   * The `span_id` of this span's parent span. If this is a root span, then this
   * field must be empty. The ID is an 8-byte array.
   */
  ProtobufCBinaryData parent_span_id;
  /*
   * A description of the span's operation.
   * For example, the name can be a qualified method name or a file name
   * and a line number where the operation is called. A best practice is to use
   * the same display name at the same call point in an application.
   * This makes it easier to correlate spans in different traces.
   * This field is semantically required to be set to non-empty string.
   * Empty value is equivalent to an unknown span name.
   * This field is required.
   */
  char *name;
  /*
   * Distinguishes between spans generated in a particular context. For example,
   * two spans with the same name may be distinguished using `CLIENT` (caller)
   * and `SERVER` (callee) to identify queueing latency associated with the span.
   */
  Opentelemetry__Proto__Trace__V1__Span__SpanKind kind;
  /*
   * start_time_unix_nano is the start time of the span. On the client side, this is the time
   * kept by the local machine where the span execution starts. On the server side, this
   * is the time when the server's application handler starts running.
   * Value is UNIX Epoch time in nanoseconds since 00:00:00 UTC on 1 January 1970.
   * This field is semantically required and it is expected that end_time >= start_time.
   */
  uint64_t start_time_unix_nano;
  /*
   * end_time_unix_nano is the end time of the span. On the client side, this is the time
   * kept by the local machine where the span execution ends. On the server side, this
   * is the time when the server application handler stops running.
   * Value is UNIX Epoch time in nanoseconds since 00:00:00 UTC on 1 January 1970.
   * This field is semantically required and it is expected that end_time >= start_time.
   */
  uint64_t end_time_unix_nano;
  /*
   * attributes is a collection of key/value pairs. Note, global attributes
   * like server name can be set using the resource API. Examples of attributes:
   *     "/http/user_agent": "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_14_2) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3578.98 Safari/537.36"
   *     "/http/server_latency": 300
   *     "abc.com/myattribute": true
   *     "abc.com/score": 10.239
   * The OpenTelemetry API specification further restricts the allowed value types:
   * https://github.com/open-telemetry/opentelemetry-specification/blob/main/specification/common/README.md#attribute
   * Attribute keys MUST be unique (it is not allowed to have more than one
   * attribute with the same key).
   */
  size_t n_attributes;
  Opentelemetry__Proto__Common__V1__KeyValue **attributes;
  /*
   * dropped_attributes_count is the number of attributes that were discarded. Attributes
   * can be discarded because their keys are too long or because there are too many
   * attributes. If this value is 0, then no attributes were dropped.
   */
  uint32_t dropped_attributes_count;
  /*
   * events is a collection of Event items.
   */
  size_t n_events;
  Opentelemetry__Proto__Trace__V1__Span__Event **events;
  /*
   * dropped_events_count is the number of dropped events. If the value is 0, then no
   * events were dropped.
   */
  uint32_t dropped_events_count;
  /*
   * links is a collection of Links, which are references from this span to a span
   * in the same or different trace.
   */
  size_t n_links;
  Opentelemetry__Proto__Trace__V1__Span__Link **links;
  /*
   * dropped_links_count is the number of dropped links after the maximum size was
   * enforced. If this value is 0, then no links were dropped.
   */
  uint32_t dropped_links_count;
  /*
   * An optional final status for this span. Semantically when Status isn't set, it means
   * span's status code is unset, i.e. assume STATUS_CODE_UNSET (code = 0).
   */
  Opentelemetry__Proto__Trace__V1__Status *status;
};
#define OPENTELEMETRY__PROTO__TRACE__V1__SPAN__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&opentelemetry__proto__trace__v1__span__descriptor) \
    , {0,NULL}, {0,NULL}, (char *)protobuf_c_empty_string, {0,NULL}, (char *)protobuf_c_empty_string, OPENTELEMETRY__PROTO__TRACE__V1__SPAN__SPAN_KIND__SPAN_KIND_UNSPECIFIED, 0, 0, 0,NULL, 0, 0,NULL, 0, 0,NULL, 0, NULL }


/*
 * The Status type defines a logical error model that is suitable for different
 * programming environments, including REST APIs and RPC APIs.
 */
struct  Opentelemetry__Proto__Trace__V1__Status
{
  ProtobufCMessage base;
  /*
   * A developer-facing human readable error message.
   */
  char *message;
  /*
   * The status code.
   */
  Opentelemetry__Proto__Trace__V1__Status__StatusCode code;
};
#define OPENTELEMETRY__PROTO__TRACE__V1__STATUS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&opentelemetry__proto__trace__v1__status__descriptor) \
    , (char *)protobuf_c_empty_string, OPENTELEMETRY__PROTO__TRACE__V1__STATUS__STATUS_CODE__STATUS_CODE_UNSET }


/* Opentelemetry__Proto__Trace__V1__TracesData methods */
void   opentelemetry__proto__trace__v1__traces_data__init
                     (Opentelemetry__Proto__Trace__V1__TracesData         *message);
size_t opentelemetry__proto__trace__v1__traces_data__get_packed_size
                     (const Opentelemetry__Proto__Trace__V1__TracesData   *message);
size_t opentelemetry__proto__trace__v1__traces_data__pack
                     (const Opentelemetry__Proto__Trace__V1__TracesData   *message,
                      uint8_t             *out);
size_t opentelemetry__proto__trace__v1__traces_data__pack_to_buffer
                     (const Opentelemetry__Proto__Trace__V1__TracesData   *message,
                      ProtobufCBuffer     *buffer);
Opentelemetry__Proto__Trace__V1__TracesData *
       opentelemetry__proto__trace__v1__traces_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   opentelemetry__proto__trace__v1__traces_data__free_unpacked
                     (Opentelemetry__Proto__Trace__V1__TracesData *message,
                      ProtobufCAllocator *allocator);
/* Opentelemetry__Proto__Trace__V1__ResourceSpans methods */
void   opentelemetry__proto__trace__v1__resource_spans__init
                     (Opentelemetry__Proto__Trace__V1__ResourceSpans         *message);
size_t opentelemetry__proto__trace__v1__resource_spans__get_packed_size
                     (const Opentelemetry__Proto__Trace__V1__ResourceSpans   *message);
size_t opentelemetry__proto__trace__v1__resource_spans__pack
                     (const Opentelemetry__Proto__Trace__V1__ResourceSpans   *message,
                      uint8_t             *out);
size_t opentelemetry__proto__trace__v1__resource_spans__pack_to_buffer
                     (const Opentelemetry__Proto__Trace__V1__ResourceSpans   *message,
                      ProtobufCBuffer     *buffer);
Opentelemetry__Proto__Trace__V1__ResourceSpans *
       opentelemetry__proto__trace__v1__resource_spans__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   opentelemetry__proto__trace__v1__resource_spans__free_unpacked
                     (Opentelemetry__Proto__Trace__V1__ResourceSpans *message,
                      ProtobufCAllocator *allocator);
/* Opentelemetry__Proto__Trace__V1__ScopeSpans methods */
void   opentelemetry__proto__trace__v1__scope_spans__init
                     (Opentelemetry__Proto__Trace__V1__ScopeSpans         *message);
size_t opentelemetry__proto__trace__v1__scope_spans__get_packed_size
                     (const Opentelemetry__Proto__Trace__V1__ScopeSpans   *message);
size_t opentelemetry__proto__trace__v1__scope_spans__pack
                     (const Opentelemetry__Proto__Trace__V1__ScopeSpans   *message,
                      uint8_t             *out);
size_t opentelemetry__proto__trace__v1__scope_spans__pack_to_buffer
                     (const Opentelemetry__Proto__Trace__V1__ScopeSpans   *message,
                      ProtobufCBuffer     *buffer);
Opentelemetry__Proto__Trace__V1__ScopeSpans *
       opentelemetry__proto__trace__v1__scope_spans__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   opentelemetry__proto__trace__v1__scope_spans__free_unpacked
                     (Opentelemetry__Proto__Trace__V1__ScopeSpans *message,
                      ProtobufCAllocator *allocator);
/* Opentelemetry__Proto__Trace__V1__Span__Event methods */
void   opentelemetry__proto__trace__v1__span__event__init
                     (Opentelemetry__Proto__Trace__V1__Span__Event         *message);
/* Opentelemetry__Proto__Trace__V1__Span__Link methods */
void   opentelemetry__proto__trace__v1__span__link__init
                     (Opentelemetry__Proto__Trace__V1__Span__Link         *message);
/* Opentelemetry__Proto__Trace__V1__Span methods */
void   opentelemetry__proto__trace__v1__span__init
                     (Opentelemetry__Proto__Trace__V1__Span         *message);
size_t opentelemetry__proto__trace__v1__span__get_packed_size
                     (const Opentelemetry__Proto__Trace__V1__Span   *message);
size_t opentelemetry__proto__trace__v1__span__pack
                     (const Opentelemetry__Proto__Trace__V1__Span   *message,
                      uint8_t             *out);
size_t opentelemetry__proto__trace__v1__span__pack_to_buffer
                     (const Opentelemetry__Proto__Trace__V1__Span   *message,
                      ProtobufCBuffer     *buffer);
Opentelemetry__Proto__Trace__V1__Span *
       opentelemetry__proto__trace__v1__span__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   opentelemetry__proto__trace__v1__span__free_unpacked
                     (Opentelemetry__Proto__Trace__V1__Span *message,
                      ProtobufCAllocator *allocator);
/* Opentelemetry__Proto__Trace__V1__Status methods */
void   opentelemetry__proto__trace__v1__status__init
                     (Opentelemetry__Proto__Trace__V1__Status         *message);
size_t opentelemetry__proto__trace__v1__status__get_packed_size
                     (const Opentelemetry__Proto__Trace__V1__Status   *message);
size_t opentelemetry__proto__trace__v1__status__pack
                     (const Opentelemetry__Proto__Trace__V1__Status   *message,
                      uint8_t             *out);
size_t opentelemetry__proto__trace__v1__status__pack_to_buffer
                     (const Opentelemetry__Proto__Trace__V1__Status   *message,
                      ProtobufCBuffer     *buffer);
Opentelemetry__Proto__Trace__V1__Status *
       opentelemetry__proto__trace__v1__status__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   opentelemetry__proto__trace__v1__status__free_unpacked
                     (Opentelemetry__Proto__Trace__V1__Status *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Opentelemetry__Proto__Trace__V1__TracesData_Closure)
                 (const Opentelemetry__Proto__Trace__V1__TracesData *message,
                  void *closure_data);
typedef void (*Opentelemetry__Proto__Trace__V1__ResourceSpans_Closure)
                 (const Opentelemetry__Proto__Trace__V1__ResourceSpans *message,
                  void *closure_data);
typedef void (*Opentelemetry__Proto__Trace__V1__ScopeSpans_Closure)
                 (const Opentelemetry__Proto__Trace__V1__ScopeSpans *message,
                  void *closure_data);
typedef void (*Opentelemetry__Proto__Trace__V1__Span__Event_Closure)
                 (const Opentelemetry__Proto__Trace__V1__Span__Event *message,
                  void *closure_data);
typedef void (*Opentelemetry__Proto__Trace__V1__Span__Link_Closure)
                 (const Opentelemetry__Proto__Trace__V1__Span__Link *message,
                  void *closure_data);
typedef void (*Opentelemetry__Proto__Trace__V1__Span_Closure)
                 (const Opentelemetry__Proto__Trace__V1__Span *message,
                  void *closure_data);
typedef void (*Opentelemetry__Proto__Trace__V1__Status_Closure)
                 (const Opentelemetry__Proto__Trace__V1__Status *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor opentelemetry__proto__trace__v1__traces_data__descriptor;
extern const ProtobufCMessageDescriptor opentelemetry__proto__trace__v1__resource_spans__descriptor;
extern const ProtobufCMessageDescriptor opentelemetry__proto__trace__v1__scope_spans__descriptor;
extern const ProtobufCMessageDescriptor opentelemetry__proto__trace__v1__span__descriptor;
extern const ProtobufCMessageDescriptor opentelemetry__proto__trace__v1__span__event__descriptor;
extern const ProtobufCMessageDescriptor opentelemetry__proto__trace__v1__span__link__descriptor;
extern const ProtobufCEnumDescriptor    opentelemetry__proto__trace__v1__span__span_kind__descriptor;
extern const ProtobufCMessageDescriptor opentelemetry__proto__trace__v1__status__descriptor;
extern const ProtobufCEnumDescriptor    opentelemetry__proto__trace__v1__status__status_code__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_opentelemetry_2fproto_2ftrace_2fv1_2ftrace_2eproto__INCLUDED */
