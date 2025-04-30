#include<stdio.h>
// Structure with array inside
// Store marks of 5 subjects for a student and calculate average.
struct marks{
int marks[5];
};
int main(){
    int sum=0;
    float average;
struct marks{
int marks[5];
};
struct marks m1={{25,65,78,90,87}};
printf("Below are the marks of student in five subjects:\n");
for(int i=0;i<5;i++){
printf("The marks of student in %d subject is %d\n",i+1,m1.marks[i]);
sum+=m1.marks[i];
}
average=sum/5.0;
printf("The average of student marks in five subject is %1.f\n",average);
    return 0;
}