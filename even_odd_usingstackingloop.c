#include <stdio.h>
int main() {//the variable to calculate sum must be initialized to 0 
int sumevenCount = 0;
int sumoddCount=0;  // Initialize the variable
for (int i = 0; i <= 50; i++) {  // Loop from 0 to 50
    if (i % 2 == 0) {
    sumevenCount += i;
    }
    }
    printf("The sum of even numbers from 0 to 50 is %d\n", sumevenCount);
    for (int i = 0; i <= 50; i++) {  // Loop from 0 to 50
        if (i % 2 !=0) {
        sumoddCount += i;
        }
    }
        printf("The sum of odd numbers from 0 to 50 is %d\n", sumoddCount);
    return 0;
}