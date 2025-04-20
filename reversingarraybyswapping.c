//a new way of printing a reversed array by swapping
#include<stdio.h>

int main(){
int arr[5]={10,20,30,40,50};
int start=0;
int end=4;
int temp;
for(int start=0;start<end;start++){
 temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;//you can also use while loop
end--;
}
printf("Reversed array \n");
for(int i=0;i<5;i++){
printf("%d\n",arr[i]);
}
    return 0;
 }
