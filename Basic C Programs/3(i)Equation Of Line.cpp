#include<stdio.h>
#include<conio.h>
int main()
{
	int x1,y1,x2,y2;
	float m,c;
	printf("Enter The Value Of x1:");
	scanf("%d",&x1);
	printf("Enter The Value Of y1:");
	scanf("%d",&y1);
	printf("Enter The Value Of x2:");
	scanf("%d",&x2);
	printf("Enter The Value Of y2:");
	scanf("%d",&y2);
	m=(y2-y1)/(x2-x1);
	c=y1-m*x1;
	printf("The Equation Of Line Is y=%.fx+%.f",m,c);
	return 0;
}


