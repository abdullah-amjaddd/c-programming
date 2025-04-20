#include<stdio.h>
int main(){
    int i = 10;
    int *j;
    j = &i;
    printf("The address of i = %p\n", &i);// Prints the memory address of i
    printf("The address of i = %p\n", j);// j holds the address of i, so this prints the same address as above
    printf("The address of j = %p\n", &j);// Prints the memory address of pointer variable j
    printf("The value of i = %d\n", i); // Prints the value of i directly
    printf("The value of i = %d\n", *(&i)); // Dereferencing the address of i (same as just printing i)
    printf("The value of i = %d\n", *j);// Dereferencing j, which points to i (prints the value of i)

    return 0;
}

//vs code command alt +click for multi cursor functionality