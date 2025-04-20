//write a program to take input of an array of size 5 and print it
#include<stdio.h>

int main(){
int marks[5];
printf("Enter the marks of five students\n");
for(int i=0;i<5;i++){//the loop iterates from 0 to 4 taking input from the user in each iteration
scanf("%d",&marks[i]);
}
for(int i=0;i<5;i++){
printf("The marks of the student %d is %d\n",i+1,marks[i]);
    }//he loop iterates from 0 to 4 printing marks of student in each iteration
    return 0;
 }
