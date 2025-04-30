#include<stdio.h>
struct receptionist{
int age;
double pay;
char name[100];
};
int main(){
  struct receptionist r1;//declaring a structure variable
  r1.age=25;//assigning value to age
  r1.pay=34.000;
  r1.name[100]="Samina";
  struct receptionist *ptr;//structure pointer variable
ptr=&r1;  //pointer pointing to the structure variable r1
printf("The age of the receptionist is %d\n",(*ptr).age);
printf("The salary of the receptionist is %.3lf\n",(*ptr).pay);
printf("The name of the receptionist is %s\n",r1.name);
printf("The salary of the receptionist is %.3lf\n",(ptr->pay));//here -> is an arrow
//operator an alternative of *dereference operator to print the value stored in pointer var
    return 0;
}