#include <stdio.h>
struct emp 
{
    char Name[50],add[50];
    int num,age;
} s[5];

main() 
{
    int i;
    printf("Enter information of Employee:\n");

    for (i=0;i<5;++i) 
	{
        
        printf("Enter Name: ");
        scanf("%s", s[i].Name);
        printf("Number:", s[i].num);
        scanf("%d",s[i].num);
        printf("Enter Age: ");
        scanf("%f", &s[i].age);
        printf("Enter Address :");
        getchar();
        scanf("%c",&s[i].add);
    }
    printf("Displaying Information:\n\n");

    for (i=0;i<5;++i) 
	{        
        printf("Name: ");
        printf("\nNumber: %d\n", i + 1);
        puts(s[i].Name);
        printf("Age : .1f", s[i].age);
        printf("Address :",s[i].add);
        printf("\n");
    }
}
