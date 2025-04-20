#include<stdio.h>
int* sum(int a,int b){
int sum=a+b;
int *ptr=&sum;
printf("The sum of a and b is %d\n",sum);
return ptr;
}
float* avg(int a,int b){
 float average=(a+b)/2.0;
float* ptr=&average;
    printf("The average of a and b is %f\n",average);
    return ptr;
    }
int main(){
int x,y;
x=12,y=3;
int* ptr1;
float* ptr2;
ptr1=sum(x,y);
ptr2=avg(x,y);
printf("The address of sum is %p\n",ptr1);
printf("The address of average is %p\n",ptr2);
    return 0;
 }
