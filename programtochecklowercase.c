// 5. Write a program to determine whether a character entered by the user is
// lowercase or not
#include<stdio.h>

int main(){
char ch;
printf("Enter a character:");
scanf("%c",&ch);
if(ch>='A' && ch<='Z'){
printf("The character is uppercase. \n");
} else {
printf("The character is lowercase .\n");
}
    return 0;
 }