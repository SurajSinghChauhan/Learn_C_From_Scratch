#include<stdio.h>
#include<conio.h>
int main()
{
	int r;
	float Area,cir;
	printf("Enter The Radius Of Circle:");
	scanf("%d",&r);
	Area=3.14*r*r;
	cir=2*3.14*r;
	printf("The Circumference Of Circle Is %.2f\n",cir);
	printf("The Area Of Circle Is %.2f\n",Area);
	return 0;
}
