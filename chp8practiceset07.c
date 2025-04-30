// 6. Write a program to decrypt a string by subtracting 1 to the ascii value of its
// characters.
#include<stdio.h>
#include<string.h>
int main(){
char str[]="Bcevmmbi!Bnkbe";
printf("%d\n",strlen(str));
printf("%d\n",sizeof(str));//size includes null character as well
for(int i=0;i<strlen(str);i++){
str[i]=str[i]-1;
}
printf("%s",str);//this encrypts our string and gives random characters
//output Abdullah Amjad
//this is an encrpytion and decryption technique
    return 0;
}