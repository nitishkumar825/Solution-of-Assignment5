// Write a program to print the first N odd natural numbers

#include <stdio.h>

int main()
{
    int i=1,n;
    printf("Enter a value for N : ");
    scanf("%d",&n);
    while (i<n*2)
    {
        printf("%d\n",i);
        i+=2;
    }
    
    return 0;
}