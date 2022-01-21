#include<stdio.h>
#include<string.h>
int ref(struct records sp[100]);
struct records
{
	int rollno;
	char name[30];
	char branch[30];
	int year;
	int marks[5];
};
int main()
{
	int i,j,n,m;
	struct records b[3];
	printf("total");
	for(i=0;i<2;i++)
	{
		printf("Enter rollno");
		scanf("%d",&b[i].rollno);
		fflush(stdin);
		printf("Enter name");
		scanf("%s",&b[i].name);
		printf("Enter branch");
		scanf("%s",&b[i].branch);
		printf("Enter year");
		scanf("%d",&b[i].year);
		printf("Enter markss");
		for(j=0;j<5;j++)
			scanf("%d",&b[i].marks[j]);
	}
	ref(b);
}
int ref(struct records sp[3])
{
	float avg,m=0;
	int i,j;
	for(i=0;i<2;i++)
	{
		printf(" rollno is %d",sp[i].rollno);
		printf("name is %s",sp[i].name);
		printf("branch is %s",sp[i].branch);
		printf("year is %d",sp[i].year);
		printf("markss");
		for(j=0;j<5;j++)
		m=m+(sp[i].marks[j]);
	    avg=m/5;
	    printf("marks is %f",avg);
}
}
