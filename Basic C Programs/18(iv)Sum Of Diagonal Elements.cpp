#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100][100],i,j,order,sum=0;
	printf("Enter The Order Of Square Matrix:");
	scanf("%d",&order);
	printf("Enter The Elements:\n");
	for(i=0;i<order;i++)
	{
	if(i>0)
	printf("\n");
	for(j=0;j<order;j++)
	{
		scanf("%d",&a[i][j]);
	}
	}
	for(i=0;i<order;i++)
	for(j=0;j<order;j++)
	if(i==j)
	{
		sum=sum+a[i][j];
	}
	printf("Sum Of The Diagonal Elements Is %d\n",sum);
	return 0;
}
