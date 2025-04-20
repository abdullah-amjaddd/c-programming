#include<stdio.h>
int sum(int a,int b);
int sum(int a,int b){
a=12;
b=24;
return a+b;//this will give the sum of 12 and 24 which is 36
}
int main(){
    int x=2,y=19;
printf("The sum of 2 and 19 is %d \n",sum(x,y));
printf("The value of x is  %d \n",x);//the value of x will remain 2 because in call by 
//value we cannot modify the value of original variable that are passed to the function
//but we can change the value of copies of variable that are going into the function so x will remain
//2 not 12 and b will remain 19 not 24 but we can do that by using call by reference
printf("The value of y is  %d \n",y);
    return 0;
 }