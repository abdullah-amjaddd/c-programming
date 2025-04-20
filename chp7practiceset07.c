// 9. Create a three–dimensional array and print the address of its elements in
// increasing order.
#include <stdio.h>
int main()
{
int arr[2][2][2] = {//the 3d array 2x2x2 means 2layerx2rowsx2columns
{{10, 12}, {14, 16}},
{{15, 18}, {20, 22}}};
for (int i = 0; i < 2; i++)
{ // layers
for (int j = 0; j < 2; j++)
{ // rows
for (int k = 0; k < 2; k++)
{ // columns
printf("Address of arr[%d][%d][%d] is %p\n", i, j, k, &arr[i][j][k]);
}
}
}
    return 0;
}
