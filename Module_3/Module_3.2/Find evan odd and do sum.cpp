// taking data from user and finding evan and odd number
#include<stdio.h> 
main()
{
    int i, num, odd = 0, even = 0;
 
    printf("Enter the value of num\n");
    scanf("%d", &num);
    for (i=1;i<=num;i++)
    {
        if (i % 2 == 0)
            even = even + i; // Sum of evan number
        else
            odd = odd + i; // Sum of odd number
    }
    printf("Sum of all odd numbers  = %d\n", odd);
    printf("Sum of all even numbers = %d\n", even);
}
