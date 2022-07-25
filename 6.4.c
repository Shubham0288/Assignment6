// Write a program to calculate the sum of the squares of the first N natural numbers .
#include<stdio.h>
int main()
{
    int n, sum=0 , square;
    printf("Enter the N th number u want to print sum of the squares up to n th number : ");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++)
    {
        square=i*i;
        printf("%d\n",square);
        sum=sum+square;
    }
    printf("sum=%d",sum);
    return 0;
}