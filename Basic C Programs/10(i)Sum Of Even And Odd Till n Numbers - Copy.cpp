#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,sum1=0,sum2=0;
	printf("Enter The Value Of n:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		sum1=sum1+i;
		else
		sum2=sum2+i;
	}
	printf("The Sum Of Even Numbers Till %d Is %d\n",n,sum1);
	printf("The Sum Of Odd Numbers Till %d Is %d\n",n,sum2);
	return 0;
}
