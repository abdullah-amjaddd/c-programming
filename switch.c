#include<stdio.h>

int main(){
int dayNumber;//camel case convention the firstletter is small and subsequent letter is 
//uppercase
printf("Enter the day number (1-7): \n");
scanf("%d",&dayNumber);
switch(dayNumber){
case 1:
printf("The day is sunday .\n");
break;
case 2:
printf("The day is monday .\n");
break;
case 3:
printf("The day is tuesday .\n");
break;
case 4:
printf("The day is wednesday .\n");
break;
case 5:
printf("The day is thursday .\n");
break;
case 6:
printf("The day is friday.\n");
break;
case 7:
printf("The day is saturday.\n");
break;
default:
printf("Invalid daynumber ,please choose between(1-7)");
break;
}
    return 0;
 }