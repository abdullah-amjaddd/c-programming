/*write a c program to print a pattern using nested loop
+++++
++++
+++
++
+ */
#include<stdio.h>

int main(){
int rows=5;
for (int i=1;i<=rows;i++){
for(int j=5;j>=i;j--){
printf("+ ");
}
printf("\n");
}
    return 0;
 }
