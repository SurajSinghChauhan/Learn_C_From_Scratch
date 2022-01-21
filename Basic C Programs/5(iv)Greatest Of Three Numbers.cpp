#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d;
	printf("Enter The First Number:");
	scanf("%d",&a);
	printf("Enter The Second Number:");
	scanf("%d",&b);
	printf("Enter The Third Number:");
	scanf("%d",&c);
	d=(a>b)?(a>c?a:c):(b>c?b:c);
	printf("%d",d);
	return 0;
}
