// Write a program to print the first N even natural numbers in reverse order

#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter a value for N : ");
    scanf("%d",&n);
    i=2*n;
    while (i>0)
    {
        printf("%d\n",i);
        i-=2;
    }
    
    return 0;
}