// Write a program to change the value of a variable to ten times of its current
// value.
#include<stdio.h>
int Callbyreference(int *x){
*x=(*x)*10;
return *x;
}
int main(){
int a=10;
printf("The current value of a is %d\n",a);
Callbyreference(&a);
printf("The modified value of a is %d\n",a);
    return 0;
 }

