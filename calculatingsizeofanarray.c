#include<stdio.h>
//program to calculate size of an array
int main(){
int arr[4]={20,90,40,46};
int size=sizeof(arr);//the size of array is 16 because each element takes 4 byte as an int
printf("The size of array is %d",size);
    return 0;
 }
