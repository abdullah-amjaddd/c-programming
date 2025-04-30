#include<stdio.h>
struct Student{//struct is a keyword Student is the name of the struct data type
int age;
int rollno;
char name[100];
};
int main(){
struct Student s1={18,20276,"Abdullah"};//the struct keyword is important for
//declaring and initializing structure variable
printf("The name of the student is %s\n",s1.name);
printf("The rollno of the student is %d\n",s1.rollno);
printf("The age of the student is %d\n",s1.age);
    return 0; 
}//So, a structure in C is a collection of variables of 
//different types under a single name.