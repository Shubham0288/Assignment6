//Write a program to calculate sum of first N even natural numbers.
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number u want to print sum of the N even numbers of natural numbers\n");
    scanf("%d",&n);
    for(int i=2 ; i<=2*n ; i=i+2)
    {
        printf("%d\n",i);
        sum=sum+n;
    }
    printf("sum=%d",sum);
    return 0;
}