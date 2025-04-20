// Quick Quiz: Write a program to print first ‘n’ natural numbers using for loop
#include<stdio.h>

int main(){
int n;
printf("Enter the n natural numbers you want to print:");
scanf("%d",&n);
for(int i=n;i>=1;i--){
printf("%d\n",i);
   }
      return 0;
 }
