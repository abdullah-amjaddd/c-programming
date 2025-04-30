// Quick Quiz: Modify the program above to check whether the file exists 
// or not before opening the file
#include<stdio.h>

int main(){
FILE *ptr;
ptr=fopen("file.txt","r");
if(ptr==NULL){
// In C, NULL is a macro representing a null pointer constant, typically
//  defined as (void*)0 or just 0.
// //  It signifies that a pointer doesn't point to any valid memory location
printf("The file doesn't exist!\n");
} else{
    printf("The file exist!\n");
}
// int num;
// fscanf(ptr,"%d",&num);
// printf("The value of num is %d\n",num);
// fscanf(ptr,"%d",&num);
// printf("The value of num is %d\n",num);
    return 0;
}