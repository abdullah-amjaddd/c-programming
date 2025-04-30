#include<stdio.h>

int main(){
FILE *ptr;//declaration of a file pointer
ptr=fopen("int.txt","r");//fopen is used to open the file in read mode
//"r" is used for reading we first give file name plus extension
char ch=fgetc(ptr);//fgetc() is used to read the character from the file
printf("%c",ch);//note that fgetc() is used in read mode only
fclose(ptr);//close the file after reading
    return 0;
}