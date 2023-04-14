//Simple program for find factorial Number 
#include<stdio.h>
main()
{
	int i,n,f=1;
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		f=f*i;
	}printf("Factorial of %d=%d",n,f);
}
