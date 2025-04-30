#include<stdio.h>

int main(){
    FILE *ptr;
ptr=fopen("abdullah.txt","a");//fopen opens the file in append mode
int num=432;//append all the things printed till the end of the file
fprintf(ptr,"%d",num);//printing 432 to the file
fclose(ptr);
    return 0;
}