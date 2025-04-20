// Quick Quiz: Write a program to print natural numbers from 10 to 20 when initial loop
// counter is initialized to 0.
// The loop counter need not be int, it can be float as well.
#include<stdio.h>

int main(){
int i=0;//loop counter initialized to 0
while(i<21){
if(i>=10 && i<=20){
printf("%d \n",i);
}
i=i+1;
}
    return 0;
 }