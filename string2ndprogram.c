#include<stdio.h>

int main(){
    //Another way of initializing string
char str[]="Abdullah Amjad";//No need of null character C automatically generate null character after you
//  have finished writing the string
printf("%s",str);//%s is the format specifier for string
    return 0;
}//the memory the string takes depend on the number of characters