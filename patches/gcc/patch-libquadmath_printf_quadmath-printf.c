--- a/libquadmath/printf/quadmath-printf.c	2020-05-07 10:50:02.000000000 +0000
+++ b/libquadmath/printf/quadmath-printf.c
@@ -189,7 +189,7 @@ quadmath_snprintf (char *str, size_t siz
       ++format;
       info.width = va_arg (ap, int);
     }
-  else if (isdigit (*format))
+  else if (isdigit ((unsigned char) *format))
     /* Constant width specification.  */
     info.width = read_int (&format);
 
@@ -206,7 +206,7 @@ quadmath_snprintf (char *str, size_t siz
 
 	  info.prec = va_arg (ap, int);
 	}
-      else if (isdigit (*format))
+      else if (isdigit ((unsigned char) *format))
 	info.prec = read_int (&format);
       else
 	/* "%.?" is treated like "%.0?".  */
