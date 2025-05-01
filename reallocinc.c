#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
printf("Enter an integer:\n");
scanf("%d",&n);
int *ptr;
ptr=(int*) malloc(n*sizeof(int));
ptr[0]=6;
printf("%d\n",ptr[0]);
ptr=(int*) realloc(ptr,10*sizeof(int));
//reallocate the memory with new size use case is in the start if you think
//youre memory is insufficient then you can use realloc
ptr[0]=10;
ptr[1]=20;
ptr[2]=30;
ptr[3]=40;
ptr[4]=50;
ptr[5]=60;
ptr[6]=70;
ptr[7]=80;
ptr[8]=90;
ptr[9]=100;
for(int i=0;i<10;i++){
printf("%d\n",ptr[i]);
}
    return 0;
}