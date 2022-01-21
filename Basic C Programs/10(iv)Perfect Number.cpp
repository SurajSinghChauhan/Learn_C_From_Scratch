#include<stdio.h>
#include<conio.h>
int main()
{
	int num,sum=0,i;
	printf("Enter The Number:");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		sum=sum+i;
	}
	if(num==sum)
	printf("%d Is A Perfect Number",num);
	else
	printf("%d Is Not A Perfect Number",num);
	return 0;
}
