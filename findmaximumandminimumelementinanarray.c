// 📈 Find the maximum and minimum element in an array
#include<stdio.h>
int main(){
int arr[10]={19,20,30,40,28,41,37,25,90,86};
int maximum_Element=arr[0];//maximum element initialized to the lowest value of array at start
int minimum_Element=arr[0];//minimum element initialized to the lowest value of array at start
for(int i=0;i<10;i++){
if(maximum_Element>=arr[i]){
maximum_Element=arr[i];
}
}
printf("The maximum element in the array is %d\n",maximum_Element);
for(int i=0;i<10;i++){
if(minimum_Element<=arr[i]){
minimum_Element=arr[i];
}
}
printf("The minimum element in the array is %d\n",minimum_Element);
return 0;
 }