#include <stdio.h>
void Palin(int );
int main()
{int n;
printf("enter a no.\n");
scanf("%d",&n);
Palin(n);
}
void Palin(int n)
{
int t,p,r,s=0;
t=n;
while(n>0)
{
r=n%10;
p=(p*10)+r;
n=n/10;
}
if(t==p)
printf("%d is a palindrome no.",t);
else
printf("%d is not a palindrome no.",t);
}


