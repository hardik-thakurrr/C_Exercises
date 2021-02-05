//Write a program in C to find the LCM of two numbers using recursion
#include<stdio.h>

int calLCM(int n, int m)
{
    static int lcm=1;
    int a,b;
    a=lcm%n;
    b=lcm%m;
    if (a==0 && b==0)
    {
        return lcm;
    }
    else
    {
        lcm++;
        calLCM(n,m);
        return lcm;
    }
}

int main()
{
    int n,x,m;
    printf(" Enter First Number -> ");
    scanf("%d", &n);
    printf(" Enter Second Number -> ");
    scanf("%d", &m);
    x=calLCM(n,m);
    printf(" The LCM of Numbers %d and %d is -> %d",n,m,x);
    printf("\n\n");
    return 0;
}
