#include<stdio.h>
struct stu
{
	int roll; char name[100];char branch[100];
	int year;int marks;
};
main()
{ struct stu s[100];
int i,n,max,j;
puts("enter the no. of students  to enter");
scanf("%d",&n);
for(i=0;i<n;i++)
{ 
printf("enter the details of %d student",i+1);
scanf("%d%s%s%d%d",&s[i].roll,s[i].name,s[i].branch
,&s[i].year,&s[i].marks);
}
max=s[0].marks;
for(i=1;i<n;i++)
{ if(max<s[i].marks)
 {max=s[i].marks; j=i;
 }
 }
 printf("topper student details");
 printf("\n Rollno\tName\tyear\tmarks\n");
 for(j=0;j<n;j++)
 printf("%d\t%s\t%s\t%d\t%d",s[j].roll,s[j].name,s[j].branch
 ,s[j].year,s[j].marks);
}
