// 6. Write a program containing functions which counts the number of positive
// integers in an array.
#include<stdio.h>
void positivecount(int n[],int positivecount,int negativecount){
for(int i=0;i<8;i++){
if(n[i]>=0){
positivecount++;
} else {
negativecount++;
}
}
printf("The number of negative numbers in the array is %d\n",negativecount);
}
int main(){
    int arr[8]={10,-20,40,-9,36,-80,-16,-67};
int positiveCount=0;
int negativeCount=0;
positivecount(arr,positiveCount,negativeCount);

    return 0;
}