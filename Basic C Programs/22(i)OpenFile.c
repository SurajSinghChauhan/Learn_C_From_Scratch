#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c,s[10],t[10];
	FILE *p,*q;
	printf("Enter the source file\n");
	gets(s);
	p=fopen(s,"r");
	if(p==0)
	{
		printf("cant open the file/not found");
		exit(0);
	}
	printf("target file\n");
	gets(t);
	if(q==0)
	{
		printf("cant open the file/file not found");
		exit(0);
	}
	q=fopen(t,"w");
	while((c=getc(p))!=EOF)
	{
		putc(c,q);
	}
	fclose(p);
	fclose(q);
}

