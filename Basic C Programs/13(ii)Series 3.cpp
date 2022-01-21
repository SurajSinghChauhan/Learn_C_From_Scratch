#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int);
int main()
{
	int n,x,j=1;
	float s=0,i;
	printf("Enter A Number:");
	scanf("%d",&n);
	printf("Enter The Value Of X:");
	scanf("%d",&x);
	for(i=0;i<n;i++,j+=2)
	{
		if((int)i%2==1)
		s=s+pow(x,i)/fact(i);
		else
		s=s-pow(x,i)/fact(i);
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
