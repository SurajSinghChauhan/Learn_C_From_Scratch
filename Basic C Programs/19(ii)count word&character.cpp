#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i,c=0,w=0,l;
	char s[100];
	puts("Enter any string");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	c++;
	printf("total character is %d",c);
	for(i=0;i<l;i++)
	{
		if(s[i]==' '||s[i]==l)
		w++;
	}
	printf("total word is:%d",w+1);
}
