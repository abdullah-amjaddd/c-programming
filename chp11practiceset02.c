// 2. Use the array in problem 1 to store 6 integers entered by the user.
#include<stdio.h>
#include<stdlib.h>
int main(){
int n=6;
int *ptr;
ptr=(int*) malloc(n*sizeof(int));
//allocate memory for 6 integers
printf("Enter six integers:\n");
for(int i=0;i<6;i++){
scanf(" %d",&ptr[i]);
}
for(int i=0;i<6;i++){
printf("%d\n",ptr[i]);
}
return 0;
}