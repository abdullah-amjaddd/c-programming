// 4. Write a program to illustrate the use of arrow operator → in C
#include<stdio.h>
typedef struct Student{
int age;
int class;
char section;
char name[100];
}S;//using typedef
int main(){
S Student ={16,9,'B',"aslam ahmed"};//no need of writing struct keyword 
 S *ptr;//structure pointer variable storing address of s1 structure variable
ptr=&Student;
printf("The age of the student is %d\n",ptr->age);
printf("The class of the student is %d\n",ptr->class);
printf("The section of the student is %c\n",ptr->section);
printf("The name of the student is %s\n",ptr->name);
    return 0;
}