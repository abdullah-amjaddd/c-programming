//Decrementing a pointer variable
#include <stdio.h>

int main()
{
    int arr[3] = {10, 20, 30};
    int *ptr = arr;
    printf("Value at ptr = %d\n", *ptr);       // 10
    printf("Value at ptr+1 = %d\n", *(++ptr)); // 20
    printf("Value at ptr+2 = %d\n", *(++ptr)); // 30
    printf("Address at ptr = %p\n", ptr);//output 0061FF18
    printf("Address at ptr+1 = %p\n", (--ptr));//the memory address decreases by 4 bytes 0061FF14
    printf("Address at ptr+2 = %p\n", (--ptr));//the memory address decreases by 4 bytes 0061FF10
    return 0;
}