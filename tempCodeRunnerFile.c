#include<stdio.h>

int main(){
int n,a=0,b=1,c;
printf("Enter the number of terms: \n");
scanf("%d",&n);
if(n<1){
printf("The fibonacci series must start with 1 \n");
}
for(int i=1;i<=n;i++){
printf("%d",a);
c=a+b;
a=b;
b=c;
}
printf("\n");
    return 0;
}
