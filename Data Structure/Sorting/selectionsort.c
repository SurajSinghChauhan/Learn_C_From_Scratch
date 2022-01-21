#include<stdio.h>
int swap(int *k, int *l){
	int temp=*k;
	*k=*l;
	*l=temp;
}
int main(){
	int i,j,n,maxe;
	printf("\t\t\t\t_____________________SELECTION----SORT_________________________________\n");
	printf("Enter total of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter array\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		maxe=i;
		for(j=i+1;j<n;j++){
			if(a[maxe]>a[j]){
				maxe=j;	
			}
			swap(&a[maxe],&a[i]);
		}
	}
	
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
