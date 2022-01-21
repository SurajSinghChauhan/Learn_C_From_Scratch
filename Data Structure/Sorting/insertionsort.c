#include<stdio.h>
int main(){

	int i,j,n,key;
	printf("\t\t\t\t_____________________INSERTION----SORT_________________________________\n");
	printf("Enter total of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter array\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++){
		key=a[i];
		j=i-1;
		while((j>=0)&&(a[j]>key)){
			a[j+1]=a[j];
			j--;	
		}
		a[j+1]=key;
	}
	
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
