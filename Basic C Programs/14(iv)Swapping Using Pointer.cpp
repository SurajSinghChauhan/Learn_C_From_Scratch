#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
int main()
{
int a,b;
printf("Enter Two Numbers:\n");
scanf("%d%d",&a,&b);
printf("The Values Before Swapping Is %d And %d\n",a,b);
	
swap(&a,&b);
printf("The Values After Swapping Is %d And %d\n",a,b);
}
void swap(int*x,int*y)
{
int z;
z=*x;
*x=*y;
*y=z;
}
