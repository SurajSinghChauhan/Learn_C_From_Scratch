#include<stdio.h>
#include<conio.h>
int main()
{
	int P,R,T,S,A;
	printf("Enter The Principal:");
	scanf("%d",&P);
	printf("Enter The Rate Of Interest:");
	scanf("%d",&R);
	printf("Enter The Time:");
	scanf("%d",&T);
	S=P*R*T/100;
	A=S+P;
	printf("The Interest Is %d\n",S);
	printf("The Amount Is %d\n",A);
	return 0;
}
