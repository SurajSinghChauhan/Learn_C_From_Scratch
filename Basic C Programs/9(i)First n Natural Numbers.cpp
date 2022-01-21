#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter The Value Of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	sum=sum+i;
	printf("The Sum Of First %d Natural Numbers Is %d",n,sum);
	return 0;
}
