// Write a program using function to print the following pattern (first n lines)
// *
// * * *
// * * * * *
#include<stdio.h>
int pattern(int n){
    for(int i=0;i<n;i++){
    for(int j=0;j<(i*2)+1;j++){
    printf("*");
    }
    printf("\n");
    }
    }
int main(){
int n=3;
int result=pattern(n);
printf("The result of the following pattern is %d",result);
    return 0;
 }
