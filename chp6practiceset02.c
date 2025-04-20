// 2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
// a function and print its address. Are these addresses same? Why?
#include<stdio.h>
void address(int a){
printf("The address of the variable i copied to function a parameter is %p\n",&a);
}
int main(){
int i=10;
printf("The address of i is %p\n",&i);
address(i);
    return 0;
 }/*the copied address of i into parameter variable a is not same thats because we are passing
the copy of i into function so the copy will have its own memory address so the function
variable a has its own memory address and variable i in main has its own memory address
but if we want same address we can use call by reference */
