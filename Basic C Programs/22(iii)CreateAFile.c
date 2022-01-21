#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *f;
	f=fopen("emp.doc","w");
	int n;
	printf("enter number of employee\n");
	scanf("%d",&n);
	int u;
	char uc[10];
	for(int i=0;i<n;i++)
	{
	printf("enter id of employee %d\n",i+1);
	scanf("%d",&u);
	
	fprintf(f,"id of the employee %d is %d\n",i+1,u);
	
	printf("enter name of employee %d\n",i+1);
	scanf("%s",&uc);
		
	fprintf(f,"name of the employee %d is %s\n",i+1,uc);
	
	printf("Enter the age of the employee %d\n",i+1);
	scanf("%d",&u);
	
	fprintf(f,"enter age of employee is %d is %d\n",i+1,u);
	
	printf("Enter the department of the employee %d\n",i+1);
	scanf("%s",&uc);
	
	fprintf(f,"department of employee is %d is %s\n",i+1,uc);
	
	printf("enter the salary of employee %d\n",i+1);
	scanf("%d",&u);
	
	fprintf(f,"salary of the employee %d is %d\n",i+1,u);
	}
}