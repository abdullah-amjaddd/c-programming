#include<stdio.h>

int main(){
char str[30];
printf("Enter the string:");
gets(str);//gets is an unformatted input function used to print the string with multi
//line with white spaces,tabs or newline whatever
printf("%s",str);
    return 0;
    //output My name is Abdullah
}