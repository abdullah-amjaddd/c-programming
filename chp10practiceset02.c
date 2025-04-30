// 2. Write a program to generate multiplication table of a given number in text
#include<stdio.h>

int main(){
    FILE *ptr;
ptr=fopen("int.txt","w");
if(ptr==NULL){
printf("Error opening the file.!\n");
}
int num=8;
for(int i=1;i<=10;i++){
fprintf(ptr,"%dx%d=%d\n",num,i,(num*i));
}
    return 0;
}