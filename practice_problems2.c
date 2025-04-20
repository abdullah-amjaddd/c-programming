//Write a C program that takes three numbers as input and prints the largest number.
#include<stdio.h>

int main(){
int a,b,c;
printf("Enter three integers:\n");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c){
    printf("A is the largest \n");
} else if(b>a && b>c){
printf("B is the largest \n");
} else {
printf("C is the largest \n");
}
    return 0;
 }