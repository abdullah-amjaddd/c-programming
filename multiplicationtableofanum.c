// Write a program to print multiplication table of a given number n.
#include<stdio.h>

int main(){
int n;
printf("Enter the number:");
scanf("%d",&n);
for(int i=1;i<=10;i++){
printf("%dx%d=%d\n",n,i,(n*i));
}
    return 0;
 }
