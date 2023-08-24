#ifndef OS_SUPPORT_CUSTOM_H
#define OS_SUPPORT_CUSTOM_H

#include <android/log.h>

#define OVERRIDE_SPEEX_FATAL
#define OVERRIDE_SPEEX_WARNING
#define OVERRIDE_SPEEX_WARNING_INT

static const char TAG[] = "EchoCanceller";

static inline void _speex_fatal(const char *str, const char *file, int line) {
    __android_log_print(ANDROID_LOG_ERROR, TAG, "Fatal (internal) error in %s, line %d: %s", file, line, str);
}

static inline void speex_warning(const char *str) {
    __android_log_print(ANDROID_LOG_WARN, TAG, "%s", str);
}

static inline void speex_warning_int(const char *str, int val) {
    __android_log_print(ANDROID_LOG_WARN, TAG, "%s %d", str, val);
}

#endif