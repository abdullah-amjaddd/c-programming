// 4. Take name and salary of two employees as input from the user and write them to
// a text file in the following format:
// i. Name1, 3300
// ii. Name2, 7700
#include<stdio.h>

int main(){
FILE *ptr;
ptr=fopen("salary.txt","w");
int salary1,salary2;
printf("Enter salary of the first employee:");
scanf("%d",&salary1);
printf("Enter salary of the second employee:");
scanf("%d",&salary2);
char name1[34],name2[34];
printf("Enter the name of the first employee");
scanf("%s",&name1);
printf("Enter the name of the second employee");
scanf("%s",&name2);
fprintf(ptr,"%s",name1);
fprintf(ptr,"%s",",");
fprintf(ptr,"%d\n",salary1);
fprintf(ptr,"%s",name2);
fprintf(ptr,"%s",",");
fprintf(ptr,"%d",salary2);
    return 0;
}
