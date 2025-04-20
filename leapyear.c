// 4. Write a program to find whether a year entered by the user is a leap year or not.
// Take year as an input from the user.
#include<stdio.h>
int main(){
int year;
printf("Enter the year:");
scanf("%d",&year);
if((year%4==0) || (year%400==0 && year%100!=0)){
    //the year will be a leap year if it is divisible by 400 but not 100 2000 is a leap year
printf("\nThe year you entered is a leap year");
} else {
printf("The year you have entered is not a leap year:");
}
    return 0;
 }

