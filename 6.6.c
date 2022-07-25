// Write a progarm to calculate factorial of a number.
#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter a number u want to factorial of that number : ");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++)
    {
        printf("%d\n",i);
        fact=fact*i;
    }
    printf("Fact=%d",fact);
    return 0;
}