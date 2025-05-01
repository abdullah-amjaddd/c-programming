#include<stdio.h>
#include<stdlib.h>
// Quick Quiz: Write a program to create an array of size n using 
// calloc where n is an integer entered by the user
int main(){
int n;
printf("Enter an integer:");
scanf(" %d",&n);
int *ptr;/*calloc is similar to malloc used for continuous allocation
//syntax is different we just type the block we needed seperated by the
size of the data type*/
ptr=(int*) calloc(4,sizeof(int));
//note that the value in the allocated memory is set to 0 by default
//until you initialize the value
ptr[0]=12;
ptr[1]=24;
ptr[2]=36;
ptr[3]=48;
for(int i=0;i<4;i++){
printf("%d\n",ptr[i]);
}
free(ptr);//memory of ptr is released
    return 0;
}