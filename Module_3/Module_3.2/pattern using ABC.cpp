// Pattern using ABC repeat right Triangle
#include<stdio.h>
main()
{
   int i,j,n,k=65;
   printf("Enter number  : ");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
	for(j=0;j<=i;j++)
	   printf("%c",k+j);
	printf("\n");
   }
}
