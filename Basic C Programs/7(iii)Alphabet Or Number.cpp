#include<stdio.h>
#include<conio.h>
int main()
{
	int c;
	printf("Enter Any Character:");
	scanf("%c",&c);
	if(c>64&&c<92)
	printf("It Is A Capital Alphabet");
	else if(c>96&&c<123)
	printf("It Is A Small Alphabet");
	else if(c>48&&c<58)
	printf("It Is A Number");
	else
	printf("It Is A Special Character");
	return 0;
}
