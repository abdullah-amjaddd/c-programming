#include<stdio.h>

int main(){
int rows;
printf("Enter num of rows : \n");
scanf("%d",&rows);
for(int i=1;i<=rows;i++){
for(int j=rows;j>=1;j--){
printf("",j);
}
for(int k=1;k<=i;k++){
printf("%d ",k);
}
printf("\n");
}
    return 0;
 }