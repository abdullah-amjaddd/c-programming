// Quick Quiz: Complete this show function to display the content of employee
#include<stdio.h>
struct employee{//global structure definition
int id;
int age;
double salary;
char name[100];
};
void show(struct employee e){//function definition
printf("The id of the employee is %d\n",e.id);
printf("The age of the employee is %d\n",e.age);
printf("The salary of the employee is %.3lf\n",e.salary);
printf("The name of the employee is %s\n",e.name);
}
int main(){

struct employee e1={20356,25,43.000,"sir mansoor"};//local structure variable
show (e1);//passing structure variable to a function

    return 0;
}