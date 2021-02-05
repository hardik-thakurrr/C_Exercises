//Write a C program to display the contents of the file in reverse order. Also copy the contents from one file to another file.
#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    FILE *fp1;
    char ch,newch[50];
    int i=0, j, COUNT=0;

    fp = fopen("mytext.txt", "r");
    fp1= fopen("copy.txt", "w");
    printf("\nThe original content is:\n\n");
    ch = getc(fp);
    while(ch != EOF)
    {
        fputc(ch,fp1);
        COUNT++;
        putchar(ch);
        newch[i] = ch;
        i++;
        ch = getc(fp);
    }

    printf("\n\n\n");
    printf("The content in reverse order is:\n\n");
    for(j=(COUNT-1); j>=0; j--)
    {
        ch = newch[j];
        printf("%c", ch);
    }
    printf("\n");
    fclose(fp);
    fclose(fp1);
    return 0;
}
