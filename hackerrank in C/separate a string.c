
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char  s[100],ns[100][100];
	int n,i,l=0,j=0;
    gets(s);
    //Write your logic to print the tokens of the sentence here.
    n=strlen(s);
    for(i=0;i<n;i++)
    {
    	if(s[i]==' '||s[i]== '\0')
		{
    	ns[l][j]= '\0';	
		j=0;
		l++;	
	}
	else
	{
		
		ns[l][j]=s[i];
		j++;
	}
}
    for(i=0;i<=l;i++)
    {
    	printf("%s \n",ns[i]);
    }
    return 0;
}

