// Write a program to print cubes of the first N natural numbers

#include <stdio.h>

int main()
{
    int i = 1,n;
    printf("Enter a value for N : ");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("Cube of %d = %d\n",i,i*i*i);
        i++;
    }
    
    return 0;
}