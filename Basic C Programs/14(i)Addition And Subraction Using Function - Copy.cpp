#include<stdio.h>
#include<conio.h>
void print_sum(int,int);
void print_sub(int,int);
int main()
{
	int a,b;
	printf("Enter The First Number:");
	scanf("%d",&a);
	printf("Enter The Second Number:");
	scanf("%d",&b);
	
	print_sum(a,b);
	print_sub(a,b);
	return 0;
}
void print_sum(int x,int y)
{
	printf("The Sum Of %d And %d Is %d\n",x,y,x+y);
}
void print_sub(int p,int q)
{
	printf("The Subraction Of %d And %d Is %d\nss",p,q,p-q);
}
