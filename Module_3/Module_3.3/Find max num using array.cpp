//program to find out the max number from given array using function
#include<stdio.h>
main()    
{    
    int arr[] = {25, 11, 7, 75, 56};      
    int length = sizeof(arr)/sizeof(arr[0]);   
    int max = arr[0];
  
    for(int i=0;i<length;i++) 
	{     
			if(arr[i]>max)    
           max = arr[i];    
    }      
    printf("Largest element present in given array: %d\n", max);    
}    
