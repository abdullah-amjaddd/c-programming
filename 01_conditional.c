#include<stdio.h>

int main(){
if(1){
printf("This if is executed! \n");
}
if( 2345){
    printf("This if is also executed! \n");
}
if('c'){
    printf("The character inside  if is also executed! \n");
}
if(0){
    printf("This if will not be  executed! \n");
}//thats because 0 is considered as false in c so condition becomes false
    return 0;
 }