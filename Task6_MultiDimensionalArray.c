//Write a C program to initialize a 3x3 array, insert elements into the array, read and print an array of elements using only pointers.
// Also find and print the sum of all diagonal elements
#include<stdio.h>

int main()
{
    int i,j,sum=0;
    int arr[10][10];
    int (*ptr)[10];
    ptr=arr;
    printf("\n Enter Elements of 3x3 Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" Enter %d,%d Element -> ",i,j);
            scanf("%d",&ptr[i][j]);
        }
    }
    printf("\n The 3x3 Matrix is:\n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",ptr[i][j]);
        }
        printf("\n ");
    }

    for(i=0;i<3;i++)
    {
         sum+=ptr[i][i];
    }
    printf("\n The Sum of Diagonals of 3x3 Matrix is -> %d",sum);
    printf("\n\n");
    return 0;
}
