#include<stdio.h>
#include<conio.h>

int main(){
	int i,j,n;
	scanf("%d",&n);
	int arr[1000];
	int b[10000];
	for(i=0;i<n;i++)
	{
		scanf("%d",arr[i]);
	}
	for(j=0;j<n;j++)
	{
		b[j]=arr[j];
	}
	for(i=0;i<n;i++)
	{
	printf("%d",b[i]);
	}

}
