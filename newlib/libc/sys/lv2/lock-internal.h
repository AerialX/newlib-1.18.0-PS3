#include <stdint.h>

typedef struct sys_lwmutex sys_lwmutex_t;

#define LWMUTEX_ATTR_PROTOCOL  0x0002
#define LWMUTEX_ATTR_RECURSIVE 0x0010
typedef struct sys_lwmutex_attribute_t {
	uint32_t attr_protocol;
	uint32_t attr_recursive;
	char name[8];
}sys_lwmutex_attribute_t;


extern int32_t sys_lwmutex_create(sys_lwmutex_t *lwmutex, const sys_lwmutex_attribute_t *lwmutex_attr);
extern int32_t sys_lwmutex_destroy(sys_lwmutex_t *lwmutex);
extern int32_t sys_lwmutex_lock(sys_lwmutex_t *lwmutex, uint64_t timeout_usec);
extern int32_t sys_lwmutex_trylock(sys_lwmutex_t *lwmutex);
extern int32_t sys_lwmutex_unlock(sys_lwmutex_t *lwmutex);

static const sys_lwmutex_attribute_t __libc_lock_attributes = {
  LWMUTEX_ATTR_PROTOCOL, LWMUTEX_ATTR_RECURSIVE, ""
};

#define LWMUTEX_UNINITIALIZED(plwm) (!((plwm)->attribute))

extern void __libc_auto_lock_allocate(sys_lwmutex_t *pMutex);

