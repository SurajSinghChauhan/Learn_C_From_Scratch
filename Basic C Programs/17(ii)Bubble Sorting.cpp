#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],i,j,temp,n;
	printf("Enter The Size Of Array:");
	scanf("%d",&n);
	printf("Enter The Values:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Elements Of Sorted Array Are:\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	return 0;
}
