--- src/config.h.orig
+++ src/config.h
@@ -1,7 +1,7 @@
 #ifndef CONFIG_H
 #define CONFIG_H
 
-#if defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__APPLE__)
 #define HAVE_KQUEUE
 #elif defined(__linux__)
 #define HAVE_EPOLL
