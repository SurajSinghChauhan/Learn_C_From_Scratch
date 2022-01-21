#include<stdio.h>
#include<conio.h>
int main()
{
	int u,a,t;
	float v;
	printf("Enter The Initial Velocity:");
	scanf("%d",&u);
	printf("Enter The Accleration:");
	scanf("%d",&a);
	printf("Enter The Time:");
	scanf("%d",&t);
	v=u+a*t;
	printf("The Final Velocity Is %.2f",v);
	return 0;
}
