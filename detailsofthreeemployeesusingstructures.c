// Quick Quiz: Write a program to store the details of 3 employees from user defined data.
// Use the structure declared above.
#include<stdio.h>
struct employee{
int age;
float salary;
char name[100];
};
int main(){
struct employee e1,e2,e3;//three structure variables
printf("Enter the details of first employee:\n");
scanf("%d %f %s",&e1.age,&e1.salary,&e1.name);
printf("Enter the details of second employee:\n");
scanf("%d %f %s",&e2.age,&e2.salary,&e2.name);
printf("Enter the details of third employee:\n");
scanf("%d %f %s",&e3.age,&e3.salary,&e3.name);
printf("The age of first employee is %d\n",e1.age);
printf("The salary of first employee is %2.f\n",e1.salary);
printf("The name of first employee is %s\n",e1.name);
printf("The age of second employee is %d\n",e2.age);
printf("The salary of second employee is %2.f\n",e2.salary);
printf("The name of second employee is %s\n",e2.name);
printf("The age of first employee is %d\n",e3.age);
printf("The salary of first employee is %2.f\n",e3.salary);
printf("The name of first employee is %s\n",e3.name);
    return 0;
}