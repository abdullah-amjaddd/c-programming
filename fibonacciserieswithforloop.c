//program to print fibonacci series with help of for loops
#include<stdio.h>
int fibonacci(int n){
int a=0,b=1,next;
if(n==0){
return a;
} else if(n==1){
return b;
} else {
for(int i=2;i<=n;i++){
next=a+b;
a=b;
b=next;
}
return b;
}
}
int main(){
int n;
printf("Enter number of terms:");
scanf("%d",&n);
int result=fibonacci(n);
printf("The fibonacci series of %d terms is %d",n,result);
    return 0;
 }
