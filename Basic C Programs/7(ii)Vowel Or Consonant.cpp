#include<stdio.h>
#include<conio.h>
int main()
{
	char a;
	printf("Enter A Character:");
	scanf("%c",&a);
	if(a=='a'||a=='A')
	printf("It Is A Vowel");
	else if(a=='e'||a=='E')
	printf("It Is A Vowel");
	else if(a=='i'||a=='I')
	printf("It Is A Vowel");
	else if(a=='o'||a=='O')
	printf("It Is A Vowel");
	else if(a=='u'||a=='U')
	printf("It Is A Vowel");
	else
	printf("It Is A Consonant");
	return 0;
}
