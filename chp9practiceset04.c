// 5. Write a program with a structure representing a complex number.
// a complex number involves a real and imaginary part
#include<stdio.h>
typedef struct C{
int real;
int imaginary;
}Complex;
int main(){
Complex c1={10,20};
printf("The value of complex number is %d+%di\n",c1.real,c1.imaginary);
return 0;
}//10+20i