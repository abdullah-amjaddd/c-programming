// 🔢 Find the sum of all elements in an array
#include<stdio.h>

int main(){
int arr[6]={12,24,56,78,97,23};
int sum=0;
for(int i=0;i<6;i++){
sum+=arr[i];
}
printf("The sum of the whole array is %d",sum);
    return 0;
 }
