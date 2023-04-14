/*structure employee that provides the following
 information -print and display empno, empname,
 address and age*/
#include<stdio.h>
struct employee
{
    char    name[30],address[100];
    int     number;
    float   age;
};
main()
{
    /*declare structure variable*/
    struct employee emp;
   
    printf("\nEnter details :\n");
    {
    	printf("Name ?:");
		gets(emp.name);
	    printf("Number ?: ");
		scanf("%d",&emp.number);
    	printf("Age ?: ");
		scanf("%f",&emp.age);
		printf("Address ?: ");
		getchar();
		scanf("%c",emp.address);
	}
	
    printf("\nEntered detail is:");
    {
		printf("\nName: %s"   ,emp.name);
	    printf("\nId: %d"     ,emp.number);
	    printf("\nAge: %f\n",emp.age);
	    printf("\nAddress: %c",emp.address);
	}
}
