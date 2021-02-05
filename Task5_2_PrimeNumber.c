//Write a program in C to check a number is a prime number or not using recursion
#include<stdio.h>

int calPrime(int n, int num)
{
    if(num==1)
        return 1;
    else
    {
        if(n%num==0)
            return 0;
        else
            calPrime(n,num-1);
    }
}

int main()
{
    int n,x,num;
    printf(" Enter a Number -> ");
    scanf("%d", &n);
    num=n/2;
    x=calPrime(n,num);
    if(x==1)
    {
        printf(" The Number %d is a Prime Number !",n);
    }
    else
    {
        printf(" The Number %d is Not a Prime Number !",n);
    }
    printf("\n\n");
    return 0;
}
