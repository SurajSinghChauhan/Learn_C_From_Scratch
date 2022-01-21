#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],n,i,j,sum=0,min,max;
	printf("Enter The Number Of Element(max 100):");
	scanf("%d",&n);
	printf("Enter The Elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	max=a[0];
	min=a[0];
	for(j=0;j<n;j++)
	{
		if(max<a[j])
		max=a[j];
		if(min>a[j])
		min=a[j];
	}
	printf("The Maximum Element Of The Array Is %d\n",max);
	printf("The Minimum Element Of The Array Is %d\n",min);
	return 0;
}
