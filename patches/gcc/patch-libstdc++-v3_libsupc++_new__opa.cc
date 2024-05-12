--- a/libstdc++-v3/libsupc++/new_opa.cc	2020-03-04 08:30:03.000000000 +0000
+++ b/libstdc++-v3/libsupc++/new_opa.cc
@@ -57,6 +57,10 @@ extern "C"
 }
 #endif
 
+#if defined(__sun) && _GLIBCXX_HAVE_ALIGNED_ALLOC
+using std::aligned_alloc;
+#endif
+
 namespace __gnu_cxx {
 #if _GLIBCXX_HAVE_ALIGNED_ALLOC
 using ::aligned_alloc;
