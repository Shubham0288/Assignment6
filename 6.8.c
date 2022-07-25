// Write a program to check whether a given number is prime number or not .
#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter any number : ");
    scanf("%d",&num);
    for( i=2 ; i<=num-1 ; i++)
    {
        if(num%i==0)
        {
            break;
        }
    }
    if(i==num)
    {
        printf("Entered number is prime number");
    }
    else
    {
        printf("Entered number is not prime number");
    }
    return 0;
}