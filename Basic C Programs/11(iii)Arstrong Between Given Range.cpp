#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int m,i,j,a,n,s,t;
	printf("Give The Range Of Number:\n");
	scanf("%d%d",&m,&n);
	printf("The Armstrong Number Between %d And %d Is:\n",m,n);
	for(i=m;i<=n;i++)
	{
		t=i;	a=0;
		while(t!=0)
		{
			t/=10;
			a++;
		}	t=i;	s=0;
		for(j=1;j<=a;j++)
		{
			s=s+pow (t%10,a);
			t/=10;
		}
		if(i==s)
		{
			printf("%d\n",i);
		}
		
	}
	return 0;
}
