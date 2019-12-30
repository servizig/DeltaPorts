--- include/proto/openssl-compat.h.orig	2019-11-25 16:38:19 UTC
+++ include/proto/openssl-compat.h
@@ -89,7 +89,7 @@ static inline int SSL_SESSION_set1_id_co
 }
 #endif
 
-#if (OPENSSL_VERSION_NUMBER < 0x1010000fL) || defined(LIBRESSL_VERSION_NUMBER) || defined(OPENSSL_IS_BORINGSSL)
+#if (OPENSSL_VERSION_NUMBER < 0x1010000fL) || defined(OPENSSL_IS_BORINGSSL)
 /*
  * Functions introduced in OpenSSL 1.1.0 and not yet present in LibreSSL / BoringSSL
  */
@@ -121,7 +121,7 @@ static inline const OCSP_CERTID *OCSP_SI
 
 #endif
 
-#if (OPENSSL_VERSION_NUMBER < 0x1010000fL) || defined(LIBRESSL_VERSION_NUMBER)
+#if (OPENSSL_VERSION_NUMBER < 0x1010000fL)
 /*
  * Functions introduced in OpenSSL 1.1.0 and not yet present in LibreSSL
  */
