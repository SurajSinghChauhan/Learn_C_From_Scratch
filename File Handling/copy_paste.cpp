#include<stdio.h>
/*
int main()
{
char c,s[100],t[100];
FILE *q,*w;
printf("Enter source file");
gets(s);
q=fopen(s,"r");
if(q==NULL)
{
printf("not found");
}
else
{
printf("enter destination");
gets(t);
w=fopen(t,"w");
while((c=getc(q))!=EOF)
{
putc(c,w);
}
printf("copied successsfully");
fclose(w);
}
fclose(q);
}
*/
int main()
{

FILE *fp=NULL;//file pointer to point file
	//file is alias of pointer structure
	char ch;int i=0;
	char a[100],b[100],c[100];
	printf("Enter file source");
	gets(b);
	fp=fopen(b,"r");//w-wite, r-read, a-append, w+ -write&read, r+ -read&write,a+ - append&write
	if(fp==NULL)
	{
		
	printf("FIle does not exist");
	}
	else
	{
		while(!feof(fp))
		{

		a[i]=fgetc(fp);
		ch=a[i];
		printf("%c",ch);
		i++;
	}
	printf("file exist");
	
}
fclose(fp);
 printf("\n%s",a); 
    i=0; 
	FILE *np;
	printf("enter target location");
	gets(c);
	np=fopen(c,"w");
	
	if(np==NULL)
	{
			printf("file is not created successfully");
	}
	else
	{
		
		while(a[i]!='\0')
		{
			fputc(a[i],np);
			i++;
		}
		
	printf("FIle is created successfully");

}
	fclose(np);
	return 0;
}
