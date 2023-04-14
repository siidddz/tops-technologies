// Pattern using ABC right Triangle
#include<stdio.h>
main()
{
   int i,j,n,k=65;
   printf("Enter number  : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
	for(j=1;j<=i;j++)
	   printf("%c",k++);
	printf("\n");
   }
}
