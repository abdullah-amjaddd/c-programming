// . Write a program to modify a file containing an integer to double its value
#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
ptr=fopen("doublevalue.txt","r");
fscanf(ptr,"%d",&num);
ptr=fopen("doublevalue.txt","w");
fprintf(ptr,"%d",(num*2));
fclose(ptr);
return 0;
}