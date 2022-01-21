#include<stdio.h>
int main()
{
    int i, j,k, N;
	printf("Enter The Value Of n:");
    scanf("%d", &N);
	for(i=N; i>=1; i--)
    {     
	
		for(k=N;k>i;k--)
		{  
		    printf(" ");
    	}
        for(j=i; j>=1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }                           
    return 0;
}
