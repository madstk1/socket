#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <sck_core.h>

int sck_log_debug(const char * fmt, ...) {
    if((SCK_LOG_LEVEL & SCK_LOG_LEVEL_DEBUG)) {
        char *buffer = malloc(sizeof(char) * 256);
        va_list vl;
        
        va_start(vl, fmt);
        vsprintf(buffer, fmt, vl);
        va_end(vl);

        printf("[DEBUG] %s\n", buffer);
        return 0;
    }
    return 1;
}

int sck_log_warning(const char * fmt, ...) {
    if((SCK_LOG_LEVEL & SCK_LOG_LEVEL_WARNING)) {
        char *buffer = malloc(sizeof(char) * 256);
        va_list vl;
        
        va_start(vl, fmt);
        vsprintf(buffer, fmt, vl);
        va_end(vl);

        printf("[WARNING] %s\n", buffer);
        return 0;
    }
    return 1;
}

int sck_log_error(const char * fmt, ...) {
    if((SCK_LOG_LEVEL & SCK_LOG_LEVEL_ERROR)) {
        char *buffer = malloc(sizeof(char) * 256);
        va_list vl;
        
        va_start(vl, fmt);
        vsprintf(buffer, fmt, vl);
        va_end(vl);

        printf("[ERROR] %s\n", buffer);
        return 0;
    }
    return 1;
}

int sck_log_critical(const char * fmt, ...) {
    if((SCK_LOG_LEVEL & SCK_LOG_LEVEL_CRITICAL)) {
        char *buffer = malloc(sizeof(char) * 256);
        va_list vl;
        
        va_start(vl, fmt);
        vsprintf(buffer, fmt, vl);
        va_end(vl);

        printf("[CRITICAL] %s\n", buffer);
        return 0;
    }
    return 1;
}