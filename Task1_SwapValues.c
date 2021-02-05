//Write a C Program to perform the swapping of 2 numbers without using a temporary variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("\n Enter Number 1 -> ");
    scanf("%d",&a);
    printf("\n Enter Number 2 -> ");
    scanf("%d",&b);
    printf("\n Before Swapping: ");
    printf("\n a -> %d",a);
    printf("\n b -> %d",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n\n After Swapping: ");
    printf("\n a -> %d",a);
    printf("\n b -> %d",b);
    printf("\n\n ");
    return 0;
}
