#include<stdio.h>
struct Rollno{
int students_Rollno;
};
int main(){
struct Rollno rollno[100]={101,102,103,104,105,106,107,108,109,110
,111,112,113,114,115,116,117,118};//structure of arrays
// printf("%d",rollno[0]);//we can also use loop to print allthe elements in array
printf("%d\n",rollno[0].students_Rollno);//printing elements of structure array variables
for(int i=0;i<18;i++){
printf("%d\n",rollno[i]);
}
    return 0;
}