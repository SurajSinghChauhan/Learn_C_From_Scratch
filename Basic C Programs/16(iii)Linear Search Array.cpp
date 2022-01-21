#include<stdio.h>
#include<conio.h>
int main()
{
	int n,s,i,a[100];
	printf("Enter The Number Of Elements:");
	scanf("%d",&n);
	printf("Enter The Elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter The Element To Search:");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	if(a[i]==s)
	{
		printf("Element Found At %d Location\n",i+1);
		break;
	}
	if(i==n)
	printf("Element Not Found\n");
	return 0;
}
