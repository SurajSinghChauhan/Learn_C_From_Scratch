#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter The First Number:");
	scanf("%d",&a);
	printf("Enter The Second Number:");
	scanf("%d",&b);
	printf("Enter The Third Number:");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		printf("%d Is The Greatest",a);
		else
		printf("%d Is The Greatest",c);
	}
	else
	{
		if(b>c)
		printf("%d Is The Greatest",b);
		else
		printf("%d Is The Greatest",c);
	}
	return 0;
}
