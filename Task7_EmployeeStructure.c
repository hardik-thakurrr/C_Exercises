//Write a C program that defines a structure employee containing the details such as empno, empname, department name and salary.
//The structure has to store 20 employees in an organization. Use the appropriate method to define the above details and define a function that will display the contents?

#include<stdio.h>
#include<stdlib.h>
int n,i,j;
struct employee
{
    int empno;
    int age;
    long int phone;
    char empname[30];
    char department_name[30];
    float salary;

};

void display(struct employee e_obj[]);

int main()
{
    struct employee e_obj[20];
      printf(" Enter Number of Employees -> ");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
            printf("\n Enter Details of %d Employee \n",i+1);
            printf(" Enter Name of the Employee -> ");
            fflush(stdin);
            gets(e_obj[i].empname);

            printf(" Enter Employee's Phone Number ->");
            scanf("%ld",&e_obj[i].phone);

            printf(" Enter Employee's Age ->");
            scanf("%d",&e_obj[i].age);

            printf(" Enter Employee's ID ->");
            scanf("%d",&e_obj[i].empno);

            printf(" Enter Employee's Salary ->");
            scanf("%f",&e_obj[i].salary);

            printf(" Enter Employee's Department Name ->");
            fflush(stdin);
            gets(e_obj[i].department_name);
      }
        display(e_obj);
        return 0;
}

void display(struct employee e_obj[])
{
    printf("\n Name\t\t EmpNo\t\t Phone Number\t\t Age\t\t Salary\t\t Department\n");
    for(i=0;i<n;i++)
    {
        printf(" %s\t\t %d\t\t %ld\t\t %d\t\t %.2f\t\t %s\n",e_obj[i].empname,e_obj[i].empno,e_obj[i].phone,e_obj[i].age,e_obj[i].salary,e_obj[i].department_name);
    }

}
