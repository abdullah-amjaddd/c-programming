// 4. Create an array dynamically capable of storing 5 integers. 
// Now use realloc sothat it can now store 10 integers.
#include<stdio.h>
#include<stdlib.h>
int main(){
int n=5;
int *ptr;
ptr=(int*) malloc(n*sizeof(int));
// printf("Enter five integers:\n");
// for(int i=0;i<5;i++){
// scanf("%d",&ptr[i]);
// }
ptr=(int*) realloc(ptr,10*sizeof(int));//reallocated 10 integers to ptr
for(int i=0;i<10;i++){
scanf("%d",&ptr[i]);
}
for(int i=0;i<10;i++){
printf("%d\n",ptr[i]);
}
free(ptr);
return 0;
}