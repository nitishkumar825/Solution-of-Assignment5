// Write a program to print the first N even natural numbers

#include <stdio.h>

int main()
{
    int i = 1,n;
    printf("Enter a value for N : ");
    scanf("%d",&n);
    while (i<2*n)
    {
        printf("%d\n",i+1);
        i+=2;
    }
    
    return 0;
}