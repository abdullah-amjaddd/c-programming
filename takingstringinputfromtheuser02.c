//taking string input from the user
#include<stdio.h>

int main(){
char str[50];//string declaration
printf("Enter the string:");
scanf("%[^\n]",str);//this format specifier will read the whole string even with white
//spaces and tabs
printf("The string is %s",str);
    return 0;
}