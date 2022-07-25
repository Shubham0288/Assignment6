// Write a program to calculate sum of the first N natural numbers.
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number u want to print sum of natural numbers up to that numbers\n");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++)
    {
        printf("%d\n",i);
        sum=sum+n;
    }
    printf("sum=%d",sum);
    return 0;
}