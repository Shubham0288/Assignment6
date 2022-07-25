// Write a program to reverse a given number.
#include<stdio.h>
int main()
{
    int num,rev=0,i;
    printf("Enter the number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        i=num%10;
        rev=rev*10+i;
        num=num/10;
    }
    printf("Reverse of the number is %d",rev);
    return 0;
}