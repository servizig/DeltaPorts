--- deps/v8/src/trap-handler/handler-inside-posix.h.orig	2020-06-02 15:09:43 UTC
+++ deps/v8/src/trap-handler/handler-inside-posix.h
@@ -12,7 +12,7 @@ namespace v8 {
 namespace internal {
 namespace trap_handler {
 
-#if V8_OS_LINUX || V8_OS_FREEBSD
+#if V8_OS_LINUX || V8_OS_FREEBSD || V8_OS_DRAGONFLYBSD
 constexpr int kOobSignal = SIGSEGV;
 #elif V8_OS_MACOSX
 constexpr int kOobSignal = SIGBUS;
