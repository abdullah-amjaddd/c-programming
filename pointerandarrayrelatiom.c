#include<stdio.h>

int main(){
int arr[]={10,20,30,40,60};
//int* pointer=&arr[0]; this way is also correct but not compatible when you want to point at the whole array
//you have to write extra lines for it so below method is more convenient
int* pointer=arr;//we will not type ampersand in array case only variable 
printf("The memory address at the 0th index is %u\n",pointer);
printf("The memory address at the 1st index is %u\n",pointer+1);
printf("The memory address at the 2nd index is %u\n",pointer+2);
printf("The memory address at the 3rd index is %u\n",pointer+3);
printf("The memory address at the 4th index is %u\n",pointer+4);
    return 0;
 }
