// 9. Write a program to check whether a given character is present in a string or not.
#include<stdio.h>
#include<string.h>
int main(){
char str[]="My name is Abdullah Amjad";
char ch='a';
int contains=0;
for(int i=0;i<strlen(str);i++){
if(str[i]==ch){
contains++;
}
}
if(contains){
printf("The %c character is present in the string",ch);
} else {
printf("The %c character is not present in the string");
}
    return 0;
}