// Write a program using function to find average of three numbers.
#include<stdio.h>
float averageofthreenumbers(float a,float b,float c ){
float avg=(a+b+c)/3.0;
return avg;
}
int main(){
float x=4.0,y=7.0,z=9.0;
float avg=averageofthreenumbers(x,y,z);
printf("The average of %f and %f and %f is %f",x,y,z,avg);
    return 0;
 }
