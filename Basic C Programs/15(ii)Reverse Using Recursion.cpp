#include <stdio.h>
#include<conio.h>
long reverse(long);
int main()
{
long n, r;
printf("Enter A Number:");
scanf("%ld", &n);
 
r = reverse(n);
 
printf("The Reverse Of The Number Is %ld\n", r);
return 0;
}
 
long reverse(long n) {
static long r = 0;
   
if (n == 0)
return 0;
   
r = r * 10;
r = r + n % 10;
reverse(n/10);
return r;
}
