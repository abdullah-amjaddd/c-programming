#include<stdio.h>
// Inverted Triangle Pattern
int main(){
int rows;
printf("Enter number of rows :\n");
scanf("%d",&rows);
for(int i=rows;i>=1;i--){
for(int j=1;j<=i;j++){
printf("* ");
}
printf("\n");
}
    return 0;
 }
