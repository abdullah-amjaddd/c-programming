#include <stdio.h>

int main()
{
    int arr[3] = {10, 20, 30};
    int *ptr = arr;
    printf("Value at ptr = %d\n", *ptr);       // 10
    printf("Value at ptr+1 = %d\n", *(++ptr)); // 20
    printf("Value at ptr+2 = %d\n", *(++ptr)); // 30
    printf("Address at ptr = %p\n", ptr);
    printf("Address at ptr+1 = %p\n", (++ptr));
    printf("Address at ptr+2 = %p\n", (++ptr));
    return 0;
}
// pointer arithmetic increments the value based on the data type lets say data type is int if we are incrementing by 1
// then the compiler will not increment the number it will increment the bytes based on system architecture lets say
// our system takes 4 bytes for an integer then it will increment to 4 bytes if we increment by 1 in our program