#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,n,t;
	printf("Enter A Three Digit Number:");
	scanf("%d",&n);
	a=n;
	b=a%10;
	b=b*b*b;
	a=a/10;
	c=a%10;
	c=c*c*c;
	a=a/10;
	d=a%10;
	d=d*d*d;
	a=a/10;
	t=b+c+d;
	if(t==n)
	printf("Armstrong Number");
	else
	printf("Not An Armstrong Number");
	return 0;
}
