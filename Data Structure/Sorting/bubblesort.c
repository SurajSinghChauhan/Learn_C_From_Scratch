#include<stdio.h>
int swap(int *k, int *l){
	int temp=*k;
	*k=*l;
	*l=temp;
}
	int i,j,n;
	printf("\t\t\t\t_____________________BUBBLE----SORT_________________________________\n");
	printf("Enter total of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter array\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);	
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
