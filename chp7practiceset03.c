//5. Write a program containing a function which reverses the array passed to it.
#include<stdio.h>
void reversingArray(int n[]){
    printf("The reversed array is :\n");
for(int i=4;i>=0;i--){
printf("%d\n",n[i]);
}
}
int main(){
int arr[5]={10,20,30,40,50};
int* ptr=arr;
reversingArray(ptr);
    return 0;
}