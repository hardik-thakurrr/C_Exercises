//C program to create menu using Switch Case
#include<stdio.h>
int main()
{
    int choice;
    printf(" MENU:  \n");
    printf(" 1) Pizza            Rs 239\n 2) Burger           Rs 129\n 3) Pasta            Rs 179\n 4) French Fries     Rs 99\n 5) Sandwich         Rs 149 ");
    printf("\n Enter Your Choice ->  ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\n FOOD ITEM -> PIZZA ");
        printf("\n PRICE     -> RS 239 ");
        break;

    case 2:
        printf("\n FOOD ITEM -> BURGER ");
        printf("\n PRICE     -> RS 129 ");
        break;

    case 3:
        printf("\n FOOD ITEM -> PASTA ");
        printf("\n PRICE     -> RS 179 ");
        break;

    case 4:
        printf("\n FOOD ITEM -> FRENCH FRIES ");
        printf("\n PRICE     -> RS 99 ");
        break;

    case 5:
        printf("\n FOOD ITEM -> SANDWICH ");
        printf("\n PRICE     -> RS 149 ");
        break;

    default:
        printf("\n INVALID CHOICE ");
        break;
    }

    printf("\n\n ");
    return 0;
}

