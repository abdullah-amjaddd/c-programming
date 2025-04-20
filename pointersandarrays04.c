#include<stdio.h>

int main(){
int marks[5];
int*ptr=marks;
printf("Enter the marks of five students:");
for(int i=0;i<5;i++){
scanf("%d",&marks[i]);
}
for(int i=0;i<5;i++){
printf("The marks of student at index %d is %d\n",i+1,*ptr);
ptr++;//thus we can get the marks of student by using pointers
}
    return 0;
 }
