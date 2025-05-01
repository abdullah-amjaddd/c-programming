// 3. Solve problem 1 using calloc().
#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;
ptr=(int*) calloc(10,sizeof(int));
//allocate memory for 10  integers
printf("Enter 10 integers:\n");
for(int i=0;i<10;i++){
scanf(" %d",&ptr[i]);
}
/*if we use free(ptr) here then nothing will be printed because memory is
freed which was allocated while ago*/
for(int i=0;i<10;i++){
printf("%d\n",ptr[i]);
}
free(ptr);
return 0;
}