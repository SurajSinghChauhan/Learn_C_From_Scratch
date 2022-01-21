#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,i,g;
	printf("Enter The First Number:");
	scanf("%d",&a);
	printf("Enter The Second Number:");
	scanf("%d",&b);
	for(i=1;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		g=i;
	}
	printf("THe G.C.D Of %d And %d Is %d",a,b,g);
	return 0;
}
