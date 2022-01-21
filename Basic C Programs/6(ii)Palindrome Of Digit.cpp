#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter A Three Digit Number:");
	scanf("%d",&a);
	c=a%10;
	b=a/100;
	if(b==c)
	printf("%d Is Palindrome",a);
	else
	printf("%d Is Not Palindrome",a);
	return 0;
}
