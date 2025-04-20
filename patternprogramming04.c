// 3. Right-Angled Triangle
// *
// **
// ***
// ****
#include<stdio.h>
int main(){
int rows=4;
int column=4;
for(int i=1;i<=4;i++){
for(int j=1;j<=i;j++){
printf("*");
}
printf("\n");
}
    return 0;
}