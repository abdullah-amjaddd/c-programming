#include<stdio.h>
//topic:string is an array of character terminated by a null characcter'\0'
int main(){
char str[]={'A','B','D','U','L','L','A','H','\0'};//here '\0' is used to mark end of string
printf("%c ",str[0]);
printf("%c ",str[1]);
printf("%c ",str[2]);
printf("%c ",str[3]);
printf("%c ",str[4]);
printf("%c ",str[5]);
printf("%c ",str[6]);
printf("%c ",str[7]);
printf("%c \n",str[9]);//o will be printed
//we can also use for loop to print an array of character
for(int i=0;i<8;i++){
printf("%c ",str[i]);
}
    return 0;
}