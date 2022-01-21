#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float x,y;
	printf("Enter The Value Of A:");
	scanf("%d",&a);
	printf("Enter The Value Of B:");
	scanf("%d",&b);
	printf("Enter The Value Of C:");
	scanf("%d",&c);
	x=(-b+ sqrt(b*b-4*a*c))/2*a;
	y=(-b-sqrt(b*b-4*a*c))/2*a;
	printf("The Roots Of The Equation Are %.2f And %.2f",x,y);
	return 0;
}
