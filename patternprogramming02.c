
// hollow triangle
// *****
// *   *
// *   *
// *****
#include <stdio.h>
int main() {
int rows = 4, cols = 5;
for (int i = 1; i <= rows; i++) {
for (int j = 1; j <= cols; j++) {
// Print * at the borders
if (i == 1 || i == rows || j == 1 || j == cols) {
printf("*");
} else {
printf(" ");
}
}
printf("\n");
}
return 0;
}