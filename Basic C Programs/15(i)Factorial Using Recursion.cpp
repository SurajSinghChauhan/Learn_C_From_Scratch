#include<stdio.h>
#include<conio.h>
long factorial(int);
int main()
{
  int n;
  long f;
 
  printf("Enter The Number:");
  scanf("%d", &n);
 
  if (n < 0)
    printf("Factorial Of Negative Integers isn't Defined.\n");
  else
  {
    f = factorial(n);
    printf("Factorial Of %d Is %d",n,f);
  }
 
  return 0;
}
 
long factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}
