#include<stdio.h>

int main(){
int x=19;
int* ptr=&x;
printf("The address of x is %p\n",ptr);
ptr++;
printf("The address of x is %p\n",ptr);
    return 0;
 }
//  The pointer moves forward by 4 bytes, not 1.
// Let’s assume:

// Address of x is 1000 (just for example).

// Then ptr++ will change ptr to 1004.
