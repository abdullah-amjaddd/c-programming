// 7. Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
// and 9 respectively.
#include <stdio.h>
int main()
{
int arr[3][10];
int mul[] = {2, 7, 9};
// Storing multiplication tables in the array
for (int i = 0; i < 3; i++)
{ // 3 rows for 2, 7, 9
for (int j = 0; j < 10; j++)
{ // 10 columns for 1 to 10
arr[i][j] = mul[i] * (j + 1);
}
}
// Displaying the tables
for (int i = 0; i < 3; i++)
{
printf("Multiplication Table of %d:\n", mul[i]);
for (int j = 0; j < 10; j++)
{
printf("%d x %d = %d\n", mul[i], j + 1, arr[i][j]);
}
printf("\n");
}
    return 0;
}