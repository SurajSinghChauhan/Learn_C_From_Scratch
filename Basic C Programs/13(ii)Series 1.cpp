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
		s=s+i/fact(i);
	}
	printf("The Sum Of Series Is %f",s);
}
int fact(int a)
{
	int fac=1;
	for(int i=1;i<=a;i++)
	{
		fac=fac*i;
	}
		return fac;
}
