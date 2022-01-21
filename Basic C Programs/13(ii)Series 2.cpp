#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
	int n;
	float s=0,i;
	printf("Enter A Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if((int)i%2==1)
		s=s+i/fact(2*i-1);
		else
		s=s-i/fact(2*i-1);
	}
	printf("The Sum Of Series Is %f",s);
}
int fact(int a)
{
	int fac=1,i;
	for(i=1;i<=a;i++)
	{
		fac=fac*i;
	}
	return fac;
}
