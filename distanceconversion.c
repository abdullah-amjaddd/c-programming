// Write a program that input the distance between SHU and your home in miles 
// and convert the age into KM, meters, centimeters, millimeters,
//  and micrometers and then print all these computed values on screen.
#include<stdio.h>
int main(){
double miles;
printf("Enter the distance b/w shu and your home.\n");
scanf("%lf",&miles);
double km=1.60934*miles;
printf("The conversion from miles to km is %lf\n",km);
double meters=km*1000;
printf("The conversion from km to m is %lf\n",meters);
double centimeters=meters*100;
printf("The conversion from m to cm is %lf\n",centimeters);
double millimeters=centimeters*10;
printf("The conversion from cm to mm is %lf\n",millimeters);
double micrometers=millimeters*1000;
printf("The conversion from millimeter to micrometer is %lf\n",micrometers);
return 0;
 }