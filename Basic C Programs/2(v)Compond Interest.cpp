#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int P,R,n,A;
	printf("Enter The Principal:");
	scanf("%d",&P);
	printf("Enter The Rate Of Interest:");
	scanf("%d",&R);
	printf("Enter The Time:");
	scanf("%d",&n);
	A=P*(1+R/100)^n;
	printf("The Amount Is %d",A);
	return 0;
}
