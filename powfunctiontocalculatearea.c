// Quick Quiz: Use the library function to calculate the area of a square with side a.
#include<stdio.h>
#include<math.h>
int main(){
int a;
printf("Enter value of a:");
scanf("%d",&a);
pow(a,2);//for pow function we use double or float
printf("The area of is %f",pow(a,2));
    return 0;
 }
