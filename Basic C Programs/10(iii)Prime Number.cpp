#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,flag=0;
	printf("Enter The Number:");
	scanf("%d",&n);
	
	for(i=2;i<=n/2;++i)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
		
	}
	if(n==1)
	printf("1 Is Neither Prime Nor Composite");
	else
	{
		if(flag==0)
		printf("%d Is A Prime Number",n);
		else
		printf("%d Is Not A Prime Number",n);
	}
	return 0;
}
