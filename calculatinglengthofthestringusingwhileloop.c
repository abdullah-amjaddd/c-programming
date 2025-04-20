//calculating the length of the string without using strlen()
#include<stdio.h>

int main(){
char str[]="AbdullahAmjad";
int count=0;
while(str[count]!='\0'){
count++;
}
printf("The count of the string without the use of str len is %d",count);
    return 0;
}//if you want to calculate spaces then use fgets or gets