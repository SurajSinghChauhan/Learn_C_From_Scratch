#include<stdio.h>
#include<string.h>
struct employee
{
	int ID;
	char name[30];
	char department[30];
	unsigned long int salary;
};
int main()
{
	char temdep[30];
	int n,i;
	struct employee e[20];
	printf("Enter The Number Of Records:");
	scanf("%d",&n);
	printf("Enter The Records Of The Employee:\n");
	for(i=0;i<n;i++)
	{
		printf("Enter The ID:");
		scanf("%d",&e[i].ID);
		printf("Enter The Name:");
		scanf("%s",&e[i].name);
		printf("Enter The Department:");
		scanf("%s",&e[i].department);
		printf("Enter The Salary:");
		scanf("%ld",&e[i].salary);
	}
	printf("\n");
	printf("Enter The Department:");
	scanf("%s",&temdep);
	for(i=0;i<n;i++)
	{
		if(strcmp(temdep,e[i].department)==0)
		{
			if(e[i].salary>50000)
			{
				printf("The Employee With 50000 Above Salary Are:\n");
				printf("ID Is %d\n",e[i].ID);
				printf("Name Is %s\n",e[i].name);
				printf("Salary Is %ld\n",e[i].salary);
			}
			printf("\n");
		}
	}
}
