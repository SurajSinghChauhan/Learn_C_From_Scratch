#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z,a;
	printf("Enter The First Number:");
	scanf("%d",&x);
	printf("Enter THe Second Number:");
	scanf("%d",&y);
	printf("Enter THe Second Number:",&z);
	scanf("%d",&z);
	a=x;
	x=y;
	y=z;
	z=a;
	printf("The Value Of First Number Is %d\n",x);
	printf("The Value Of Second Number Is %d\n",y);
	printf("The Value Of Third Number Is %d\n",z);
	return 0;
}
