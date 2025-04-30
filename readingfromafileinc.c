#include<stdio.h>

int main(){
FILE *ptr;//declaration of a file pointer
ptr=fopen("int.txt","r");//fopen is used to open the file
//"r" is used for reading we first give file name plus extension
int num;
fscanf(ptr,"%d",&num);//reads an integer from the file
printf("The value of num is %d\n",num);//output 150
fscanf(ptr,"%d",&num);//reading another integer from the file
printf("The value of num is %d\n",num);//output 234
fclose(ptr);//close the file after reading
    return 0;
}