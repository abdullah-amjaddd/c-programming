// 6. Write a program to encrypt a string by adding 1 to the ascii value of its
// characters.
#include<stdio.h>
#include<string.h>
int main(){
char str[]="Abdullah Amjad";
printf("%d\n",strlen(str));
printf("%d\n",sizeof(str));//size includes null character as well
for(int i=0;i<strlen(str);i++){
str[i]=str[i]+1;
}
printf("%s",str);//this encrypts our string and gives random characters
//output Bcevmmbi!Bnkbe
    return 0;
}