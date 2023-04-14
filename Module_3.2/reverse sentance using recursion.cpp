//reverse of string using recursion
#include<stdio.h>
void reverseSentence();
main() 
{
    printf("Enter a sentence: ");
    reverseSentence();
}
void reverseSentence() 
{
    char c;
    scanf("%c", &c);
    if (c != '\n') 
	{
        reverseSentence();
        printf("%c", c);
    }
}

