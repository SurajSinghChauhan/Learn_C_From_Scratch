#include<stdio.h>
#include<conio.h>
int main()
{
	int number,b,sum=0,i;
	printf("Enter The Digit Number:");
	scanf("%d",&number);
	for(i=0;number!=0;i++)
	{
		b=number%10;
		sum=sum+b;
		number=number/10;
	}
	printf("The Sum Of The Digits Is %d",sum);
	return 0;
}
