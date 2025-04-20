#include<stdio.h>
int sum(int *a,int *b);
int sum(int *a,int *b){// the variable a  and bstores the memory address that was passed to function
*a=12;//the original value is modified by use of pointers(& and *)
*b=24;
return *a+*b;//this will give the sum of 12 and 24 which is 36
}
int main(){
    int x=2,y=19;
printf("The sum of 2 and 19 is %d \n",sum(&x,&y));// the function passes the memory address of the variables x and y to function sum
printf("The value of x is %d \n",x);// the value is changed by using pointers
printf("The value of y is %d \n",y);
    return 0;
}