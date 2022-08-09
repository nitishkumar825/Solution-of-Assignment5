// Write a program to print a table of N.

#include <stdio.h>

int main()
{
    int i = 1,n;
    printf("Enter a value for N : ");
    scanf("%d",&n);
    printf("Multiplication Table of %d\n\n",n);
    while (i<=10)
    {
        printf("%d * %d = %d\n",n,i,5*i);
        i++;
    }
    
    return 0;
}