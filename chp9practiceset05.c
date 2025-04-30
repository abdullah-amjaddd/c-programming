// 6. Create an array of 5 Complexnumbers created in Problem 5 and display them
// with the help of a display function. The values must be taken as an input from
// the user.
#include<stdio.h>
 typedef struct Complex{
int real;
int imaginary;
}complex;
void display(complex c){
printf("The value of complex number is %d+%di\n",c.real,c.imaginary);
}
int main(){
complex c1[5];
for(int i=0;i<5;i++){
printf("Enter real part:\n");
scanf("%d",&c1[i].real);
printf("Enter imaginary part:\n");
scanf("%d",&c1[i].imaginary);
display(c1[i]);
}
    return 0;
}