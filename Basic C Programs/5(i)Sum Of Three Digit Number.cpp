#include<stdio.h>
#include<conio.h>
int main()
{
	int num,x,y,z,sum=0;
	printf("Enter A Three Digit Number:");
	scanf("%d",num);
	x=num%10;
	num/=10;
	y=num%10;
	num/=10;
	z=num%10;
	sum=x+y+z;
	printf("The Sum Of Three Digit Number Is %d",sum);
	return 0;
}
