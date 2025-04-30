// 2. Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
// The vectors must be two–dimensional
#include<stdio.h>
struct vectors{//global structure type
    int i;
    int j;
};
struct vectors Sumofvectors(struct vectors v1,struct vectors v2){
struct vectors v3={v1.i+v2.i,v1.j+v2.j};//v3 will store the sum and return back to main
return v3;
}
int main(){
struct vectors v1={10,20};//first structure variable
struct vectors v2={20,30};//2nd structure variable
struct vectors v3=Sumofvectors(v1,v2);//third structure var which will store the sum of
//two vectors the both struct variable is passed to function
printf("The sum of two vectors is %di+%dj\n",v3.i,v3.j);
    return 0;
}