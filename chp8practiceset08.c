// 8. Write a program to count the occurrence of a given character in a string.
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Abdullah Amjad";
    char c='l';
    int count=0;
    for(int i=0;i<strlen(str);i++){
 if(str[i]==c){
count++;
 }
    }
printf("The count of the occurance  characters in the string is %d",count);
    return 0;
}