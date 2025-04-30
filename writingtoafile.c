#include<stdio.h>

int main(){
FILE *ptr;
ptr=fopen("abdullah.txt","w");//fopen opens the file in write mode
int num=432;
fprintf(ptr,"%d",num);//printing 432 to the file
fclose(ptr);
    return 0;
}