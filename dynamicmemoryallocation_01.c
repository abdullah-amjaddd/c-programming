#include<stdio.h>
#include<stdlib.h>
/*c supports dynamic memory allocation which means you can allocate
memory on your own as c is a low level language and close to the hard
ware architecture */
int main(){
int n;
printf("Enter an integer:");
scanf(" %d",&n);//always use space to clear new line buffer in scanf otherwise 
// input is skipped and new line left  in the input buffer from the previous scan f is consumed by %d
//think about whatif i want to create an array of n elements of int
//arr[n]; this is not allowed in c thats why we use dma syntax below
//malloc() is part of stdlib
int *ptr;
ptr=(int*) malloc(n*sizeof(int));
/*sizeof operator returns the number of byte int is taking in this
//computer architecture most of comp take 4 byte for an int malloc is
//allocating memory lets say n is 5 multiply with 4 =20 bytes then malloc
//is allocating 20 memory to ptr and int* is used to type cast becuase
//malloc returns a null pointer but we need an integer pointer thats why
// int* is used to type cast the return value of malloc*/
ptr[0]=23;//we have 20 bytes so we can make array of size 5
ptr[1]=4;
ptr[2]=30;
printf("\n%d\n",ptr[0]);
printf("%d\n",ptr[1]);
printf("%d\n",ptr[2]);
    return 0;
}