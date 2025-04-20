#include<stdio.h>
int main(){
int n,isPrime=1;
printf("Enter an integer:\n");
scanf("%d",&n);
for(int i=1;i<=n;i++){
if(n%i==0)
isPrime++;
}
if(isPrime==2){
printf("Prime number \n");
} else {
printf("Not a prime number \n");
}
    return 0;
 }