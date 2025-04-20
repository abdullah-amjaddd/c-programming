#include<stdio.h>
int main(){
int age;
printf("Enter your age: \n");
scanf("%d",&age);
if(age>60){
printf("You can definitely drive .\n");
} else if(age>40){
printf("You can drive if you have driving license .\n");
} else if(age<40 && age>=18){
printf("You can drive once you will pass the driving test .\n");
} else {
printf("You cannot drive bcz you are less than 18 .\n");
}//here you can use multiple if else rather than multiple if to evaluate multiple conditions
    return 0;
 }//if the first condition is true then it will execute only rather than looking at the other conditions
 // for example first if condition is true than else if block is true it doesnt matter the first condition
 //which is true will be evaluated first