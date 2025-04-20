#include<stdio.h>
void print_array(int*n){
printf("The first element of the array is %d\n",n[0]);
printf("The second element of the array is %d\n",n[1]);
printf("The third element of the array is %d\n",n[2]);
}
int main(){
int arr[3]={25,65,78};
// print_array(arr);//this is also correct just passing the whole array
print_array(arr);
    return 0;
 }