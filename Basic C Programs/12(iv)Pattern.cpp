#include<stdio.h>
int main()
{
	int n,i,j,k,l,z;
	printf("Enter The Number Of Rows:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf(" ");}
			for (k=1,z=1;k<=i;k++,z++)
		    {printf("%c",64+k);}
			if(i>1)
			for(l=1;l<=j;l++)
			printf("%c",62+z--);

			printf("\n");
			    }

}
