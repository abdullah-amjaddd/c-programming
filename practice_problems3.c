#include<stdio.h>
// Write a C program that checks whether a given year is a leap year or not.
// (Hint: A leap year is divisible by 4 but not by 100, unless also divisible by 400.)
int main(){
int year;
printf("Enter the year :");
scanf("%d",&year);
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    printf("%d is a leap year.\n", year);
} else {
    printf("%d is not a leap year.\n", year);
}
return 0;
}