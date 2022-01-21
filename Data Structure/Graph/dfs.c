#include<stdio.h>
#include <stdlib.h>
int source,V,E,time,visited[20],G[20][20];

int dfs(int i)
{
	int j;
	visited[i]=1;
	printf("%d->",i+1);
	for(j=0;j<V;j++){
		if(G[i][j]==0&&visited[j])
			dfs(j);
	}
}

int main()
{
	int i,j,v1,v2;
    printf("\t\t\tGraphs\n");
    printf("Enter the no of edges:");
    scanf("%d",&E);
    printf("Enter the no of vertices:");
    scanf("%d",&V);
    G[V][V]={0};
    for(i=0;i<E;i++){
    	printf("Enter the edges (format: V1 V2) : ");
    	scanf("%d%d",&v1,&v2);
    	G[v1-1][v2-1]=1;
	}
	
    for(i=0;i<V;i++)
    {
        for(j=0;j<V;j++)
            printf(" %d ",G[i][j]);
        printf("\n");
    }
    printf("Enter The Source: ");
    scanf("%d",&source);
    dfs(source-1);
}
