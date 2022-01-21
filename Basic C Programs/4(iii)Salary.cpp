#include<stdio.h>
#include<conio.h>
int main()
{
	int basic;
	float DA,HRA,gross;
	printf("Enter THe Basic Salary:");
	scanf("%d",&basic);
	DA=(20*basic)/100;
	HRA=(25*basic)/100;
	gross=basic+DA+HRA;
	printf("The DA Is %.2f\n",DA);
	printf("THe HRA Is %.2f\n",HRA);
	printf("The Gross Salary Is %.2f\n",gross);
	return 0;
}
