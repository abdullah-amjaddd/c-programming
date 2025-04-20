/*fgets is the best option than gets because it is safe and prevent buffer overflow
gets causes bufferoverflow if character limit is exceeded by the user thats why
you shoud prefer fgets over gets in modern c programming
so fgets discarded the character that are exceeding the limit and prevent
bufferoverflow
*/
#include<stdio.h>

int main(){
char str[30];
printf("Enter the string:");
fgets(str,30,stdin);//fgets is also unformatted input function
//syntax:fgets(string name,size,stdin)
//fgets read input from user as a standard input
printf("%s",str);
    return 0;
}