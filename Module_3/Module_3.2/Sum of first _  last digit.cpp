//summation of first and last Digit.
#include<stdio.h>
int main()
{
    int n, sum=0,f,l;
    printf("Enter number : ");
    scanf("%d",&n);   
    l=n%10;
	while (n>=10)
    {
        n = n/10;
    }
    f=n;
    sum = f+l;
    printf("Sum of first and last digit = %d", sum);
}
