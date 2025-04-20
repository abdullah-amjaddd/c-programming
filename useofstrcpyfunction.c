//strcpy() is used to copy the content of 2nd string into 1st string passed to it
#include<stdio.h>
#include<string.h>
int main(){
char st1[]="Abdullah";
char st2[]="Amjad";
strcpy(st1,st2);//here content of st2 is copied into st1
// syntax:strcpy(The string you want to change,the string that includes content)
printf("%s %s",st1,st2);
    return 0;
}