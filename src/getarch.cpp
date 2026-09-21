#if defined(_WIN32)
#include <windows.h>
#elif defined(__APPLE__)
#include <sys/types.h>
#include <sys/sysctl.h>
#endif

const char* getTargetTriple() {
#if defined(_WIN32)

    #if defined(_MSC_VER)
        #if defined(_M_X64)
            return "x86_64-pc-windows-msvc";
        #elif defined(_M_IX86)
            return "i686-pc-windows-msvc";
        #elif defined(_M_ARM64)
            return "aarch64-pc-windows-msvc";
        #elif defined(_M_ARM)
            return "arm-pc-windows-msvc";
        #else
            return "unknown-pc-windows-msvc";
        #endif

    #elif defined(__GNUC__) || defined(__clang__)
        #if defined(__x86_64__) || defined(__amd64__)
            return "x86_64-w64-windows-gnu";
        #elif defined(__i386__)
            return "i686-w64-windows-gnu";
        #elif defined(__aarch64__)
            return "aarch64-w64-windows-gnu";
        #elif defined(__arm__)
            return "arm-w64-windows-gnu";
        #else
            return "unknown-w64-windows-gnu";
        #endif
    #endif

#elif defined(__APPLE__)

    #if defined(__arm64__) || defined(__aarch64__)
        return "aarch64-apple-darwin";
    #elif defined(__x86_64__)
        return "x86_64-apple-darwin";
    #elif defined(__i386__)
        return "i686-apple-darwin";
    #else
        return "unknown-apple-darwin";
    #endif

#elif defined(__linux__)

    #if defined(__x86_64__)
        return "x86_64-unknown-linux-gnu";
    #elif defined(__i386__)
        return "i686-unknown-linux-gnu";
    #elif defined(__aarch64__)
        return "aarch64-unknown-linux-gnu";
    #elif defined(__arm__)
        return "arm-unknown-linux-gnu";
    #else
        return "unknown-unknown-linux-gnu";
    #endif

#else

    return "unknown-unknown-unknown";

#endif
}