#include<stdio.h>

int main(){
FILE *ptr;//declaration of a file pointer
ptr=fopen("int.txt","w");//fopen is used to open the file in write mode
//"w" is used for writing to the file
char ch=fputc('b',ptr);//fputc() is used to write a character from the file
printf("%c",ch);//note that fgetc() is used in write mode only
fclose(ptr);//close the file after reading
    return 0;
}