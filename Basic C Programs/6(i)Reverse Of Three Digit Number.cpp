#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,number;
	printf("Enter The Three Digit Number:");
	scanf("%d",&a);
	b=a%10;
	a=a/10;
	c=a%10;
	a=a/10;
	number=b*100+c*10+a;
	printf("Reverse Is %d",number);
	return 0;
}
