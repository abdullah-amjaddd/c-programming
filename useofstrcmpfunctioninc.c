// STRCMP()
// This function is used to compare two strings. It returns 0 if the strings are equal, a
// negative value if the first string's mismatching character's ASCII value is less than the
// second string's corresponding mismatching character, and a positive value otherwise.
#include<stdio.h>
#include<string.h>
int main(){
char st1[]="Abdullah";
char st2[]="Abdullah";
char st3[]="Abdullah";
char st4[]="Amjad";
char st5[]="Amjad";
char st6[]="Abdullah";
printf("%d\n",strcmp(st1,st2));//returns 0 because both strings are equal
printf("%d\n",strcmp(st3,st4));//gives negative value because st3 is less than st4(textographically)
printf("%d",strcmp(st5,st6));//gives positive value because st5 is greater than st6 
//use Ascii values to check if strings are different whether they are positive or negative
    return 0;
}
