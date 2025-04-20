// Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.
// Write a program to sum first ten natural numbers using while loop
#include<stdio.h>

int main(){
int n;
int sum1=0;
int sum2=0;
printf("Enter the first 10 natural numbers:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
sum1+=i;
}
printf("The sum of first ten natural num by using for loop is %d",sum1);
int j=1;
do{
printf("\n");
sum2+=j;
j++;
}while(j<=n);
printf("The sum of first ten natural num by using do while loop is %d",sum2);
    return 0;
}