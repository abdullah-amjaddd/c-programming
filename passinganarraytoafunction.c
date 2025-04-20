#include<stdio.h>
void print_array(int n[]){//inside the function n behaves like a pointer
printf("The first element of the array is %d\n",n[0]);
printf("The second element of the array is %d\n",n[1]);
printf("The third element of the array is %d\n",n[2]);
}
int main(){
int arr[3]={25,65,78};
int* ptr=arr;// the memory address of the whole array is stored in ptr variable which is pointing towrds the array
print_array(ptr);//the array is passed to the function 
    return 0;
 }
