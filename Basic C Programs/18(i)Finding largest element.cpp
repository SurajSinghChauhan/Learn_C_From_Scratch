#include <stdio.h>
int main(){
    int r, c, a[100][100], t, i, j;
    printf("Enter number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter number of columns (between 1 and 100): ");
    scanf("%d", &c);
    printf("\nEnter elements matrix:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            scanf("%d",&a[i][j]);
        }
    //  Finding the largest element
    t=a[0][0];
    for(i=0;i<r;++i)
    {
        for(j=0;j<c;++j)
        {
        	if(t<a[i][j])
            t=a[i][j];
        }
    }
    // Displaying the result
    printf("\nLargest element is %d at postion %d,%d: \n",t,(i+1),(j+1));
    
    return 0;
}
