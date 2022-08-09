// Write a program to print the first N odd natural numbers in reverse order.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a value for N : ");
    scanf("%d",&n);
    int i=2*n;
    while (n>0)
    {
        printf("%d\n",i-1);
        n--;
        i-=2;
    }
    
    
    return 0;
}