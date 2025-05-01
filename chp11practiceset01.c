// 1. Write a program to dynamically create an array of size 6 
// capable of storing 6integers.
#include<stdio.h>
#include<stdlib.h>
int main(){
int n=6;
int *ptr;
ptr=(int*) malloc(n*sizeof(int));
//allocate memory for 6 integers
ptr[0]=6;
ptr[1]=12;
ptr[2]=18;
ptr[3]=24;
ptr[4]=30;
ptr[5]=36;
for(int i=0;i<6;i++){
printf("%d\n",ptr[i]);
}
return 0;
}