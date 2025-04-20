// 5. Write a program to sum first ten natural numbers using while loop
#include<stdio.h>

int main(){
int sum=0;
int n;
printf("Enter the first ten natural numbers:");
scanf("%d",&n);
int i=1;
while(i<=n){
sum+=i;
i++;
}
printf("The sum of first ten natural number is %d",sum);
    return 0;
 }
