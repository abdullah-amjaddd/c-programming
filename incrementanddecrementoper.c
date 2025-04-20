//Using the increment and decrement operator generate the following output
//You can assign integer value 5 in a variable and then apply increment and decrement operator
// output
// 6
// 6
// 7
// 8
// 8
// 10
#include<stdio.h>
int main(){
int n=5;
++n;
printf("%d\n",n);
printf("%d\n",n);
++n;
printf("%d\n",n);
n++;
printf("%d\n",n);
printf("%d\n",n);
n+=2;
printf("%d\n",n);
return 0;
 }