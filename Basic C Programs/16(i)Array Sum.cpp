#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],n,i,j,sum=0;
	printf("Enter The Number Of Element(max 100):");
	scanf("%d",&n);
	printf("Enter The Elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=0;j<n;j++)
	sum=sum+a[j];
	printf("The Sum Of Elements Is %d",sum);
	return 0;
}
