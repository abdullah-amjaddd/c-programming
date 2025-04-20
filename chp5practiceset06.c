// Write a recursive function to calculate the sum of first ‘n’ natural numbers.
#include<stdio.h>
int sumof_n_naturalnumbers(int n){
    if(n==1){
    return 1;
    }
return n+sumof_n_naturalnumbers(n-1);
/*recursion logic if you enter n=5 then 5+sum(4)
5+4+sum(3)
5+4+3+sum(2)
5+4+3+2+sum(1)
5+4+3+2+1=15 so the sum of first five natural number is 15*/
}
int main(){
int a;
printf("Enter the first n ntural numbers:");
scanf("%d",&a);
int sum=sumof_n_naturalnumbers(a);
printf("The sum of %d natural number is %d",a,sum);
    return 0;
 }
