#include <stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s1[100], s2[100], i, j;
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    // calculate the length of string s1
    // and store it in i
    i=strlen(s1);
    for(j = 0; s2[j] != '\0'; ++i, ++j)
    {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
    printf("After concatenation: %s", s1);
    return 0;
}
