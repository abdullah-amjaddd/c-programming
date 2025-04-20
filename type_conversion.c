#include<stdio.h>
/*if we evaluate an integer by an integer the result will be an integer
if we evaluate an integer by a float the result will be  a float
if we evaluate a float by a float the result will be a float
*/
int main(){
float a=5.0;
int b=4;
float c=a/b;
printf("The value of c is %f",c);//here we will get an floating point value
    return 0;
 }