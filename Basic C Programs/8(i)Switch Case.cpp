#include<stdio.h>
#include<conio.h>
int main()
{
	int choice,a,b;
	float c;
	printf("Enter The First Number:");
	scanf("%d",&a);
	printf("Enter The Second Number:");
	scanf("%d",&b);
	printf("The Choices Are:\n");
	printf("1.Addition\n");
	printf("2.Subraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Modulus\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		c=a+b;
		printf("The Addition Of Two Numbers Is %.2f\n",c);
		break;
		case 2:
		c=a-b;
		printf("The Subraction Of Two Numbers Is %.2f\n",c);
		break;
		case 3:
		c=a*b;
		printf("The Multiplication Of Two Numbers Is %.2f\n",c);
		break;
		case 4:
		c=a/b;
		printf("The Division Of Two Numbers Is %.2f\n",c);
		break;
		case 5:
		c=a%b;
		printf("The Modulus Of Two Numbers Is %.2f\n",c);
		break;
		default:
		printf("Invaild Choice\n");
	}
	
	return 0;
}
