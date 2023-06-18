#ifndef COROUTINE_SYSTEM_DEFINES_H
#define COROUTINE_SYSTEM_DEFINES_H

#ifdef __cplusplus
extern "C" {
#endif

#define COROUTINE_STATE_INITIAL 0

#define COROUTINE_ERROR_SUCCESS 0
#define COROUTINE_ERROR_ARGUMENT_RANGE 1
#define COROUTINE_ERROR_KERNEL_NOT_INITIALIZED 2
#define COROUTINE_ERROR_INVALID_HANDLE 3

#define COROUTINE_IDLE_TASK_PRIORITY 0

#ifdef __cplusplus
}
#endif

#endif