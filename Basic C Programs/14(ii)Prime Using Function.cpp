#include<stdio.h>
#include<conio.h>
int check_prime(int);
int main()
{
int n, result;
   
printf("Enter The Number:");
scanf("%d",&n);
 
result = check_prime(n);
   
if ( result == 1 )
printf("%d Is A Prime Number\n", n);
else
printf("%d Is Not A Prime Number\n", n);
return 0;
}
 
int check_prime(int a)
{
int c;
   
for ( c = 2 ; c <= a - 1 ; c++ )
{
if ( a%c == 0 )
return 0;
}
if ( c == a )
return 1;
}
