// Quick Quiz: Create a string using double quotes and print its content using a loop.
#include<stdio.h>
#include<string.h>
int main(){
char str[]="My name is Abdullah Amjad and i am 18 years old studying in salim habib university and  pursuing a degree in bs computerscience";
int length=strlen(str);
printf("%s\n",str);
printf("The length of the string is %d\n",length);
for(int i=0;i<=127;i++){
printf("%c",str[i]);
}
    return 0;
}