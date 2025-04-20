// Quick Quiz: Create a 2-d array by taking input from the user. Write a display function to
// print the content of this 2-d array on the screen.
#include<stdio.h>

int main(){
int arr[3][2];//{{12,13},{14,15},{16,17}}
/*as array indexing starts from 0 the 0th row and 0th column will be 12
the oth row and 1st column will be 13,1st row and 0th column will be 14
the 1st row and 1st column will be 15,the 2ndrow and 0th column will be 16
the 2nd row and 1st column will be 17
thats sum up 2D array of size 3by2 means 3rowsx2columns
*/
printf("Enter the elements of the 2d array:\n");
for(int i=0;i<3;i++){//outer loop for rows starting from index 0 till 2nd index
for(int j=0;j<2;j++){//inner loop for columns starting from index 0 till 1
    //in other words the columns are the elements or values inside the row for exaample{1,2},here 0th
    //column is 1 and 1st column is 2 
scanf("%d",&arr[i][j]);
}
}
printf("Displaying the elements of the 2d arrays:\n");
for(int i=0;i<3;i++){//outer loop for rows starting from index 0 till 2nd index
for(int j=0;j<2;j++){//inner loop for columns starting from index 0 till 1
printf("The value of arr[%d] and arr[%d] is %d\n",i,j,arr[i][j]);
 }
 printf("\n");
}
return 0;
}