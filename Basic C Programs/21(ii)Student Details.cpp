#include<stdio.h>
#include<string.h>
struct student
{
	int roll_no;
	char name[30];
	char Branch[30];
	int year;
	float marks;
}
int main()
{
	struct student s[20];
	printf("Enter The Number Of Records:");
	scanf("%d",&n);
	printf("Enter The Details Of The Student:\n");
	for(i=0;i<n;i++)
	{
		printf("Enter The Roll Number:");
		scanf("%d",s[i].roll_no);
		printf("Enter The Name:");
		scanf("%d",s[i].name);
		printf("Enter The Branch:");
		scanf("%d",s[i].Branch);
		printf("Enter The Year:");
		scanf("%d",s[i].year);
		printf("Enter The Marks:");
		scanf("%f",s[i].marks);
	}
}
