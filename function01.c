#include<stdio.h>
int sumoftwovars(int x,int y);//function prototype
int sumoftwovars(int x,int y){//function definition
return x+y;//returning x and y to main
}
int main(){
int num1,num2;
printf("Enter two numbers:\n");
scanf("%d %d",&num1,&num2);
int c=sumoftwovars(num1,num2);//function call giving x and y to function
printf("The sum of %d and %d is %d",num1,num2,c);  
return 0;
 }
 //this is a basic program to understands functions and its characteristics
 