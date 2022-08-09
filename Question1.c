// Write a program to print MySirG N times on the screen

#include <stdio.h>

int main()
{
    int n,i = 0;
    printf("Enter a value for N : ");
    scanf("%d",&n);
    while (i<n)
    {
        printf("MySirG\n");
        i++;
    }
    return 0;
}