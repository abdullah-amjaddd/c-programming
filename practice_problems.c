#include<stdio.h>
//Write a C program that takes a number as input 
//and determines whether it is positive, negative, or zero.
int main(){
int number;
printf("Enter a number");
scanf("%d",&number);
if(number>0){
    printf("The number is positive.\n");
} else if(number==0){
printf("The number is zero .\n");
} else {
printf("The number is negative .\n");
}
    return 0;
 }
