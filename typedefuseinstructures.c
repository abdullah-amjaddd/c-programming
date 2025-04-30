#include<stdio.h>
typedef struct Student{
int age;
int rollno;
char name[100];
}student;//now we can use student as an data type instead of writing struct everytime
int main(){
student s1={18,20276,"Abdullah"};//here student becomes datatype because of typedef
printf("The name of the student is %s\n",s1.name);
printf("The rollno of the student is %d\n",s1.rollno);
printf("The age of the student is %d\n",s1.age);
    return 0; 
}