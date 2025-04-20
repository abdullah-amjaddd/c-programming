#include<stdio.h>
// Quick Quiz: Try these operations on another variable by creating pointers in a separate
// program. Demonstrate all the four operations.
// Following operations can be performed on a pointer:
// 1. Addition of a number to a pointer.
// 2. Subtraction of a number from a pointer.
// 3. Subtraction of one pointer from another.
int main(){
int a=19;
int *ptr1=&a;
int b=27;
int* ptr2=&b;
printf("The value at ptr1=%d\n",*(ptr1));
printf("The address at ptr1=%p\n",(ptr1));//current memory address
printf("The address at ptr1=%p\n",(ptr1+1));//incrementing the current memory address
//first operation completed
printf("The address at ptr1=%p\n",(ptr1-1));
//second operation completed
int difference=ptr2-ptr1;
printf("The difference of %p and %p is %p\n",ptr1,ptr2,difference);
//third operation completed
if(ptr1>ptr2){
printf("The address of %p is greater than %p\n",ptr1,ptr2);
} else{
printf("The address of %p is greater than %p\n",ptr2,ptr1);
}
//forth operation completed
    return 0;
 }
