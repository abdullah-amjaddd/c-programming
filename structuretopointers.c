#include<stdio.h>
struct father {
    int age;
    double job_Salary;
    char name[100];
};
int main() {
    struct father f1 = {45, 34.000, "Amjad Hussain"};
    // Correct way to access each member:
    printf("%d\n", f1.age);                // Access age directly
    printf("%.3lf\n", f1.job_Salary);      // Access salary directly
    printf("%s\n", f1.name);               // Access name directly
    // If you really want to use pointers:
    int *age_ptr = &f1.age;
    double *salary_ptr = &f1.job_Salary;
    char *name_ptr = f1.name;  // Note: no & for arrays
    printf("%d\n", *age_ptr);
    printf("%.3lf\n", *salary_ptr);
    printf("%s\n", name_ptr);  // No * for string printing
    return 0;
}