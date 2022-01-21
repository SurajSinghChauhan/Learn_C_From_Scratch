#include<stdio.h>
#include<conio.h>
int main()
{
	float F,C;
	printf("Enter The Temperature in Farenheit:");
	scanf("%f",&F);
	C=5*(F-32)/9;
	printf("The Temperature Is Celcius Is %f\n",C);
	return 0;
}
