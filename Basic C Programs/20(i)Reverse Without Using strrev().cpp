#include <stdio.h>
int main()
{
   char s[1000], r[1000];
   int b, e, count = 0;

   printf("Input a string\n");
   gets(s);

   // Calculating string length

   while (s[count] != '\0')
      count++;

   e= count - 1;

   for (b= 0; b < count; b++) {
      r[b] = s[e];
      e--;
   }

   r[b] = '\0';

   printf("%s\n", r);

   return 0;
}
