// inverted right angle triangle
// ****
// ***
// **
// *

#include<stdio.h>
int main(){
int rows=4;
int column=4;
for(int i=1;i<=4;i++){
for(int j=rows;j>=i;j--){
printf("*");
}
printf("\n");
}
    return 0;
}