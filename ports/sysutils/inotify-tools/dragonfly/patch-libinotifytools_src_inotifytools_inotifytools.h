--- libinotifytools/src/inotifytools/inotifytools.h.orig	2021-09-28 08:39:16 UTC
+++ libinotifytools/src/inotifytools/inotifytools.h
@@ -1,7 +1,7 @@
 #ifndef _inotifytools_H
 #define _inotifytools_H
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define stat64 stat
 #define lstat64 lstat
 #endif
