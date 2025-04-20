// Write a program to calculate the sum of the numbers occurring in the
// multiplication table of 8. (consider 8 x 1 to 8 x 10).
#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
    printf("%dx%d=%d\n",n,i,(n*i));
    sum+=n*i;
    }
    printf("The sum of the numbers occurring in the multiplication table of 8 is %d\n",sum);
    return 0;
 }