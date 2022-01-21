#include<stdio.h>
#include<math.h>
int main()
{
int z;
printf("Choose Operation-\n1. Binary No. to Decimal No. \n2.Decimal No. to Binary No.\n");
scanf("%d",&z);
if (z==1)
  {
 int bn,s=0,d,p=1;
  printf("Enter an Number in Binary Number System\n");
    scanf("%d",&bn);
while (bn>0)
    {
        d=bn%10;
        s=s+d*p;
        bn/=10;
        p*=2;
    }
printf("The Number in Decimal Number System is %d",s);
}
 else if(z==2)
{
  int dn,t,p=1,s=0;
 
  printf("Enter an Number in Decimal Number System\n");
  scanf("%d",&dn);
  while (dn>0)
{
t=dn%2;
s=s+t*p;
dn/=2;
p=p*10;
}
printf("The Number in Binary Number System is %d",s);
}
}
