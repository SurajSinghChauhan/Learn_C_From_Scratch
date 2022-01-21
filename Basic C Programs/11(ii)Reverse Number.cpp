#include<stdio.h>
int main()
{
	int n,a=0,b,i;
	printf("Enter The Number:");
	scanf("%d",&n);
	while(n!=0)
	{
		b=n%10;
		a=a*10+b;
		n/=10;
	}
	printf("Reverse Of The Number Is %d\n",a);
	return 0;
}
