#include<stdio.h>
void swapping_pointers(int *a,int *b);
void swapping_pointers(int *a,int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int main(){
int x,y;
x=5,y=4;
printf("The value of x is %d \n",x);//value before swapping
printf("The value of y is %d \n",y);
swapping_pointers(&x,&y);
printf("The value of x is %d \n",x);//value after swapping
printf("The value of y is %d \n",y);
    return 0;
 }