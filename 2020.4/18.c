#include <stdio.h>

int main() {
   char *p = "KOREA";
   printf("%sn", p);
   printf("%sn", p + 3);
   printf("%cn", *p);
   printf("%cn", *(p + 3));
   printf("%cn", *p + 2);
   return 0;
}