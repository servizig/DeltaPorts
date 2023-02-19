--- cmake/Modules/ObsHelpers.cmake.orig	2023-02-19 11:53:14 UTC
+++ cmake/Modules/ObsHelpers.cmake
@@ -4,7 +4,7 @@ if(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
   include(ObsDefaults_macOS)
   set(OS_MACOS ON)
   set(OS_POSIX ON)
-elseif(CMAKE_SYSTEM_NAME MATCHES "Linux|FreeBSD|OpenBSD")
+elseif(CMAKE_SYSTEM_NAME MATCHES "Linux|FreeBSD|OpenBSD|DragonFly")
   include(ObsDefaults_Linux)
   set(OS_POSIX ON)
   string(TOUPPER "${CMAKE_SYSTEM_NAME}" _SYSTEM_NAME_U)
@@ -238,7 +238,7 @@ endfunction()
 function(export_target target)
   set(CMAKE_EXPORT_PACKAGE_REGISTRY OFF)
 
-  if(OS_LINUX OR OS_FREEBSD)
+  if(OS_LINUX OR OS_FREEBSD OR OS_DRAGONFLY)
     set(_EXCLUDE "")
   else()
     set(_EXCLUDE "EXCLUDE_FROM_ALL")
