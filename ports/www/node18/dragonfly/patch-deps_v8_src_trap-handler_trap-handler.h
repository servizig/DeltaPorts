--- deps/v8/src/trap-handler/trap-handler.h.orig	2023-04-16 15:59:50.766992000 +0200
+++ deps/v8/src/trap-handler/trap-handler.h	2023-04-16 16:00:24.037512000 +0200
@@ -20,7 +20,7 @@ namespace trap_handler {
 // X64 on Linux, Windows, MacOS, FreeBSD.
 #if V8_HOST_ARCH_X64 && V8_TARGET_ARCH_X64 &&                        \
     ((V8_OS_LINUX && !V8_OS_ANDROID) || V8_OS_WIN || V8_OS_DARWIN || \
-     V8_OS_FREEBSD)
+     V8_OS_FREEBSD || V8_OS_DRAGONFLYBSD)
 #define V8_TRAP_HANDLER_SUPPORTED true
 // Arm64 (non-simulator) on Mac.
 #elif V8_TARGET_ARCH_ARM64 && V8_HOST_ARCH_ARM64 && V8_OS_DARWIN
