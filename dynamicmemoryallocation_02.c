#include<stdio.h>
#include<stdlib.h>
// Quick Quiz: 
// Write a program to create a dynamic array of 5 floats using malloc().
int main(){
float n=5;
float *ptr;
ptr=(float*) malloc(n*sizeof(float));
ptr[0]=1.32;//dynamic array
ptr[1]=2.5;
ptr[2]=4.5;
ptr[3]=6.6;
ptr[4]=2.4;
for(int i=0;i<5;i++){
printf("%.1f\n",ptr[i]);//.1f give you only one value after decimal point offering
//precision
}
//Also, it's a good practice to free() the dynamically allocated memory at the end:
free(ptr);
    return 0;
}