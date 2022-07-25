//Write a program to calculate sum of N odd natural numbers.
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the N th number u want to sum up to that number : ");
    scanf("%d",&n);
    for(int i=1 ; i<=2*n ; i=i+2)
    {
        printf("%d\n",i);
        sum=sum+n;
    }
    printf("sum=%d",sum);
    return 0;
}