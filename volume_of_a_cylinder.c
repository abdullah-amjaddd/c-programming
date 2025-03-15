#include<stdio.h>

int main(){
int radius;
int height;
printf("Enter the radius and height: \n");
scanf("%d %d",&radius,&height);
printf("The volume of the cylinder with %d and %d is %f",radius,height,3.14*radius*radius*height);
    return 0;
 }