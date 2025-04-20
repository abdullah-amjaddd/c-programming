#include<stdio.h>
int main(){
    int num;
    printf("Enter an integer :\n");
    scanf("%d",&num);
    // Fixed while loop to decrement num in each iteration
    while(num>0){
        if(num==5){
            printf("Break");
            break;
        }
        num--; // Decrement num to avoid infinite loop
    }
    // Reread number since the while loop modified it
    printf("\nEnter another integer for the for loop:\n");
    scanf("%d",&num);
    for(int i=1;i<num+1;i++){
        if(i==3 || i==7){
            continue;
        }
        printf("%d ",i);
    }
    return 0;
}