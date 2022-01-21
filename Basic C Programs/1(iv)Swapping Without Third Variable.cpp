#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter The First Number:");
	scanf("%d",&a);
	printf("Enter The Second Number:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The First Number Is %d\n",a);
	printf("The Second Number Is %d\n",b);
	return 0;
}
