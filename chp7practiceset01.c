// 1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
// to the third element where ptr is a pointer pointing to the first element of the
// array
#include<stdio.h>

int main(){
int arr[10]={11,12,13,14,15,16,17,18,19,20};
int* ptr=&arr[0];
printf("ptr pointing to the 2nd element of an array is %d\n",*(ptr+1));
printf("ptr pointing to the 3rd element of an array is %d\n",*(ptr+2));
printf("ptr pointing to the 2nd element of an array is %p\n",(ptr+1));
printf("ptr pointing to the 3rd element of an array is %p\n",(ptr+2));
    return 0;
 }
