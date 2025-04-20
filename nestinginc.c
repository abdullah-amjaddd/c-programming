#include<stdio.h>

int main(){
int n;
printf("Enter the rows:\n");
scanf("%d",&n);
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
printf("* ");//the outer loop runs once first and then inner loop runs completely then move to next value of i
}//this is called nesting
printf("\n");
}
    return 0;
 }
