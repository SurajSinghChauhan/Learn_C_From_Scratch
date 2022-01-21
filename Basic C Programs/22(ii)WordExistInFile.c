#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *p;
	char a[100],b[100];
	char str[100];
	char*pos;
	int i,s;
	printf("Enter file path");
	scanf("%s",a);
	p=fopen(a,"r");
	if(p==0)
	{
		printf("cant open the file/not found");
		exit(0);
	}
	printf("enter the word to search in the file");
	scanf("%s",b);
	s=0;
	while((fgets(str,100,p))!=NULL)
	{
		i=0;
		while((pos=strstr(str+i,b))!=NULL)
		{
			i=(pos-str)+1;
			s++;
		}
	}
	printf("%s is found %d times in the file.b,s");
	fclose(p);
}
	