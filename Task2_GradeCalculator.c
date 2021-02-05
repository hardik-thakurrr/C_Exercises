//Write a C program that first asks for the marks.Take an input after printing “Enter marks”.
//Then use decision making and print “Grade A”, “Grade B”, “Grade C”, “Grade D” or “Grade F” based on the bins provided above.
//85 - 100 -> Grade A 70 - 84 -> Grade B 55 - 69 -> Grade C 40 - 54 -> Grade D Below 40 -> Grade F
#include<stdio.h>
int main()
{
    int marks;
    printf("\n Enter Marks: ");
    scanf("%d",&marks);
    if(marks>=85 && marks<=100)
        printf(" GRADE 'A' ");

    else if(marks>=70 && marks<=84)
        printf(" GRADE 'B' ");

    else if(marks>=55 && marks<=69)
        printf(" GRADE 'C' ");

    else if(marks>=40 && marks<=54)
        printf(" GRADE 'D' ");

    else if(marks>=0 && marks<40)
        printf(" GRADE 'F' ");

    else
        printf(" Wrong Input of Marks ");
    printf("\n\n ");
    return 0;
}
