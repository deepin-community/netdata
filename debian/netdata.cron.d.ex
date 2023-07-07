#
# Regular cron jobs for the netdata package
#
0 4	* * *	root	[ -x /usr/bin/netdata_maintenance ] && /usr/bin/netdata_maintenance
