//Write a program in C to find the sum of digits of a number using recursion
#include<stdio.h>

int calculateSum(int n)
{
    if(n==0)
        return 0;

    else
    {
        int r;
        r=n%10;
        n=n/10;
        return(r+calculateSum(n));
    }
}

int main()
{
    int n,x;
    printf("\n Enter a Number -> ");
    scanf("%d",&n);
    x=calculateSum(n);
    printf("\n The Sum of Digits in the Number %d is -> %d",n,x);
    printf("\n\n ");
    return 0;
}
