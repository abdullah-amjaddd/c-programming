#include<stdio.h>

int main(){
    int arr[2][3][4]={{{10,12,13,14},{22,24,35,56},{12,15,17,19}},{{56,67,78,90},{12,19,47,23},{102,104,106,108}}};
for(int i=0;i<2;i++){
for(int j=0;j<3;j++){
for(int k=0;k<4;k++){
printf("The value of [%d] [%d] [%d] =%d\n",i,j,k,arr[i][j][k]);
}
}
}
    return 0;
}