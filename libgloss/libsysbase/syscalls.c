#include <sys/syscalls.h>

struct __syscalls_t __syscalls = {
	NULL,			//	sbrk_r
	NULL,			//	close_r
	NULL,			//	open_r
	NULL,			//	read_r
	NULL,			//	write_r
	NULL,			//	lseek_r
	NULL,			//	lseek64_r
	NULL,			//	fstat_r
	NULL,			//	fstat64_r
	NULL,			//	stat_r
	NULL,			//	stat64_r
	NULL,			//	ftruncate_r
	NULL,			//	truncate_r
	NULL,			//	fsync_r
	NULL,			//	link_r
	NULL,			//	unlink_r
	NULL,			//	chmod_r
	NULL,			//	rename_r
	NULL,			//	utime_r

	NULL,			//	umask_r

	NULL,			//	mkdir_r
	NULL,			//	rmdir_r
	NULL,			//	chdir_r
	NULL,			//	getcwd_r

	NULL,			//	closedir_r
	NULL,			//	opendir_r
	NULL,			//	readdir_r
	NULL,			//	readdir_r_r
	NULL,			//	rewinddir_r
	NULL,			//	seekdir_r
	NULL,			//	telldir_r

	NULL,			//	isatty_r
	NULL,			//	execve_r
	NULL,			//	gettod_r
	NULL,			//	settod_r
	NULL,			//	getrusage_r

	NULL,			//  sys_lwmutex_create_r
	NULL,			//	sys_lwmutex_destroy_r
	NULL,			//	sys_lwmutex_lock_r
	NULL,			//	sys_lwmutex_trylock_r
	NULL,			//	sys_lwmutex_unlock_r

	NULL,			//	exit
};
