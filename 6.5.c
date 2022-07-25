// Write a program to calculate the cubes of the first N natural numbers.
#include<stdio.h>
int main()
{
    int n,sum=0,cube;
    printf("Enter the n th number u want to sum of cubes up to that number : ");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++)
    {
        cube=i*i*i;
        printf("%d\n",cube);
        sum=sum+cube;
    }
    return 0;
}