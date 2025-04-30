// 5. Write your own version of strcpy function from <string.h>
#include<stdio.h>
#include<string.h>
void strcpy(char string1[],char string2[]){
for(int i=0;i<strlen(string2),i++){
string1[i]=string2[i];
}
}
int main(){
char str1[]="Abdullah";
char str2[]="Amjad";
strcpy(str1,str2);
printf("%s %s",str1,str2);
    return 0;
}