//declaring a string using pointers
#include<stdio.h>

int main(){
char* ptr="Abdullah";
ptr="Amjad";//the string is reinitialized with help of pointer
printf("%p\n",ptr);//this will give memory address of the string
//no need of using dereferencing operator* to print the value of string
printf("%s",ptr);//this will give the value of the string
    return 0;
}