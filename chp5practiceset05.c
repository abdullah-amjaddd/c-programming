#include<stdio.h>

int main(){
int a=4;
int b=4;
printf("%d %d %d\n",a,++a,a++);
printf("%d %d %d\n",b++,++b,b);
//if the evaluation order is right to left then output will be 6 6 4 
//mostly compiler follows right to left order so output will be 6 6 4
//if evaluation order is left to right 4 4 5
    return 0;
 }
