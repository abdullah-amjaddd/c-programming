// Another way of reversing an array
#include <stdio.h>

int main()
{
    int n = 5;
    int array[] = {10, 20, 30, 40, 50};
    int temp;

    // Reverse the array using swapping logic
    for (int i = 0; i < n / 2; i++)
    {
        temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }

    // Display reversed array
    printf("The reversed array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}
/*let me explain swapping logic we are running for loop from 0 till 5/2 which means the loop will run 
//half of the size if n=5 then it will run 2 times(fractional part is dismissed in integer ) in 
first iteration arr[0] is swapped with arr[n-i-1]here n=5 and i=0 so 5-1 =4 so in 1st iteration arr[0]
is swapped with arr[4] so array will be {50,20,30,40,10}.same in 2nd iteration so array will be
{50,40,30,20,10} no need of further iteration thats why we give condition n/2.Also applicable to odd
because in integer division fractional part is dismissed for example if 7/2=3.5 the result will be 3
*/