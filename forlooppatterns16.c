/*write a c program to print this pattern
2    4
3    6
4    8
5    10 */
#include<stdio.h>

int main(){
for(int i=2;i<=5;i++){
printf("%d \t %d",i,(i*2));
printf("\n");
}
}
