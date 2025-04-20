//taking string input from the user
#include<stdio.h>

int main(){
char str[50];//string declaration
printf("Enter the string:");
scanf("%s",str);//no need of ampersand in scanf because str points to the first
//character of the string thus getting the address thats why no ampersand
printf("The string is %s",str);
//note that if you enter a string with tabs and spaces only the character before
//whitespaces,tabs are stored in scanf and printed by printf

    return 0;
}