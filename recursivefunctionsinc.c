#include<stdio.h>
int factorial(int x){
if(x==0 || x==1){
return 1;
} else{
return factorial(x-1) *x;//recursive call function calling itself
}
}
int main(){
int a=4;
printf("The factorial of %d is %d",a,factorial(a));
    return 0;
 }
