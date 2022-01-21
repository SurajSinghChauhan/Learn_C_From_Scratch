#include<stdio.h>
#include<conio.h>
void fact(int*,int*);
int main()
{
	int a,b;
	printf("Enter The Number:");
	scanf("%d",&a);
	fact(&a,&b);
	printf("The Factorial Of %d Is %d",a,b);
}
void fact(int*a,int*b)
{
	int i,n;
	for(i=1;i<=*a;i++)
	{
		*b=*b*i;
	}
}
