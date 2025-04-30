// 1. Write a program to read three integers from a file.
#include<stdio.h>

int main(){
FILE *ptr;
ptr=fopen("int.txt","r");
int num;
fscanf(ptr,"%d",&num);
printf("The value of num is %d\n",num);
fscanf(ptr,"%d",&num);
printf("The value of num is %d\n",num);
fscanf(ptr,"%d",&num);
printf("The value of num is %d\n",num);
fclose(ptr);
//note that file pointer moves throughout when fscanf is used after and after 
    return 0;
}