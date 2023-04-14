//Find out length of string without using inbuilt function
#include<stdio.h>
main() 
{
    char s[] = "Hey There";
    int i;

    for (i=0;s[i]!='\0';++i);
    
    printf("Length of the string: %d", i);
}
