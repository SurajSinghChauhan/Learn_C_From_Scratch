#include<stdio.h>
#include<conio.h>
int main()
{
	float v,s;
	printf("Enter The Velocity In km/hr:");
	scanf("%f",&v);
	s=v*5/18.0;
	printf("The Velocity In m/s Is %.2f",s);
	return 0;
}
