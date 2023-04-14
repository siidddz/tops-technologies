// Pattern using Same Number right Triangle
#include<stdio.h>
main()
{
   int i,j,n,k=1;
   printf("Enter number  : ");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
	for(j=0;j<=i;j++)
	   printf("%d ",k+j);
	printf("\n");
   }
}
