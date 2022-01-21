#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a=0,b=1,count=2,c;
	printf("How Many Terms You Want To Print:");
	scanf("%d",&n);
	printf("Fibonacci Series:\n");
	printf("%d\n%d\t",a,b);
	
	while(count<n)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
		count++;
	}
return 0;
}
