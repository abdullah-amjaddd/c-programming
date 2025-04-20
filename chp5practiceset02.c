//Write a function to convert Celsius temperature into Fahrenheit.
#include<stdio.h>
int Celcius_to_Fahrenhiet(double a){
double fahrenhiet=(a*9.0/5.0)+32.0;
return fahrenhiet;
}
int main(){
double celcius=37.0;
double fahrenhiet=Celcius_to_Fahrenhiet(celcius);
printf("The converted temperature from %lfC is %.2lfF",celcius,fahrenhiet);
    return 0;
 }