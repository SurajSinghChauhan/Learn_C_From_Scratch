#include<stdio.h>
#include<string.h>
#include<conio.h>
struct Employee{
	char name[100];
	char username[100];
	 char pswrd[100];
	 char email[100];
};
int main()
{
	struct Employee yp;
	char q;int x,y,m,n;
	FILE *fp=NULL;//file pointer to point file
	//file is alias of pointer structure
	char ch;int i=0,l=0,j,z;
	char a[1000],p[100],k[100],b[1000][1000];
	FILE *np=NULL;
	while(1)
	{
printf("1. For Show All Data\n");
printf("2. For Registration\n");
printf("3. For Login\n");
printf("4. For Exit\n");
printf("\t\tEnter Your Choice\n");
 
q=getch();

if(q==49)
{


	fp=fopen("d:\\Suraj.txt","r");//w-wite, r-read, a-append, w+ -write&read, r+ -read&write,a+ - append&write
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
	printf("\n");
	
}
fclose(fp);
 
    
	
}
else if(q==50){
	fp=fopen("d:\\Suraj.txt","a");
	printf("\t\tEnter Name :");
	scanf("%s",yp.name);
	fflush(stdin);
	printf("\t\tEnter username :");
	scanf("%s",yp.username);
	fflush(stdin);
	printf("\t\tEnter Password :");
    scanf("%s",yp.pswrd);
	fflush(stdin);
	printf("\t\tEmail :");
	scanf("%s",yp.email);
	fflush(stdin);
	fputs(yp.name,fp);
	fputs(" \t\t\t ",fp);
	fputs(yp.username,fp);
	fputs(" \t \t\t\t ",fp);
	fputs(yp.pswrd,fp);
	fputs(" \t\t\t\t\t ",fp);
	fputs(yp.email,fp);
	printf("\t\t\tData Saved\n");
	fclose(fp);
}
else if(q==51)
{ i=0;l=0;
	fp=fopen("d:\\Suraj.txt","r");
	if(fp==NULL)
	{
	printf("FIle does not exist");
	}
	else
	{
		while(!feof(fp))
		{
        ch=fgetc(fp);
		if( ch==' '||ch=='\0'||ch=='	'  )
		{
		b[l][j]= '\0';	
		j=0;
		l++;	
	}
	else
	{
		
		b[l][j]=ch;
		j++;
		}
			
}}fclose(fp);
  printf("\t\tEnter UserName :");
  scanf("%s",p);
  printf("\t\tEnter Password :");
  for(m=0;1;m++)
  {
   ch=getch();
   if(ch==13)
   break;
   printf("*");
   k[m]=ch;
  
  } 
printf("\n");
  for(m=0;m<=l;m++)
  {
   if((x=strcmp(p,b[m]))==0)
   break;
}
for(m=0;m<=l;m++)
  {
   if((y=strcmp(k,b[m]))==0)
   break;
} 

	if(x==0&&y==0){
	
	printf("\t\t\tLOGIN SUCCESSFULL\n");
	while(1)
	{
	
	printf("\t1. For Update Email\n");
	printf("\t2. For Delete Record\n");
	printf("\t3. For Main Menu\n");
	scanf("%d",&z);
	if(z==1)
	{
	}
	else if(z==2)
	{
	}
	else if(z==3)
	{
	break;	
	}
	}
}
	else
	printf("\t\t\tWRONG USERNAME OR PASSWORD\n");
}

else if(q==52)
{
	break;
}
}
}
