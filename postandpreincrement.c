#include<stdio.h>

int main(){
int a;
printf("Enter the first integer:");
scanf("%d",&a);
// int b=++a;
int c=a++;
// printf("The pre incremented value is %d\n",b);the answer will be 11
printf("The post incremented value is %d",c);//the answer will be 10
    return 0;
 }