#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,fac=1;
	printf("Enter The Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	fac=fac*i;
	printf("The Factorial Of %d Is %d",n,fac);
	return 0;
}
