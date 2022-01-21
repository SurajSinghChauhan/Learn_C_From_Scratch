#include<stdio.h>
#include<conio.h>
int main()
{
 float a,b,c,d,e,f,s;
	printf("Enter The Marks Of English:");
	scanf("%f",&a);
	printf("Enter The Marks Of Maths:");
	scanf("%f",&b);
	printf("Enter The Marks Of Physics:");
	scanf("%f",&c);
	printf("Enter The Marks Of Chemistry:");
	scanf("%f",&d);
	printf("Enter The Marks Of Hindustani Music:");
	scanf("%f",&e);
	
	s=(a+b+c+d+e)/5;
	if(s>89)
	printf("Grade A\n");
	else if(s>79)
	printf("Grade B\n");
	else if(s>59)
	printf("Grade C\n");
	else
	printf("Grade D\n");
	
	return 0;
}
