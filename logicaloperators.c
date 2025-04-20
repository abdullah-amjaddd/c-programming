#include<stdio.h>
int main(){
int num1=12;
int num2=19;
if(num1<num2 && num1%2==0){
printf("And condition will execute because both conditions are true .\n");
}
if(num1>num2||num1%2==0){
printf("Or condition will execute because one conditions are true .\n");
}
if(!(num1>num2)){
printf("The not condition will execute bcz num1 is not greater than num2 .\n");
}
int a=0,b=1;
printf("The value of a and b is %d .\n",a&&b);//this will print 0 bcz the condition is not true
printf("The value of a and b is %d .\n",a||b);//this will print 1 as b is equal to 1
printf("The value of a and b is %d .\n",!b);//this will print 0 bcz b is 1 so not invert it 
    return 0;
 }