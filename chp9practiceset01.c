// 1. Create a two-dimensional vector using structures in C.
/*vector has direction and use complex variable such as i j k*/
#include<stdio.h>
struct vectors{
int i;
int j;
int k;
};
int main(){
struct vectors v1={10,20,30};
printf("%di-%dj+%dk\n",v1.i,v1.j,v1.k);
    return 0;
}