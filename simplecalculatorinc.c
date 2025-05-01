#include<stdio.h>
int main(){
int choice,num1,num2;
char calculateagain;
do{
printf("Welcome to the simple calculator!\n");
printf("Enter two numbers on which you want to perform operation\n");
scanf("%d %d",&num1,&num2);
printf("What operation would you like to perform(+,-,/,%)\n");
printf("Press 1. for addition(+)\n");
printf("Press 2. for subtraction(-)\n");
printf("Press 3. for multiplication(*)\n");
printf("Press 4. for division(/)\n");
printf("Press 5. for modulus(%)\n");
printf("Enter your choice!\n");
scanf("%d",&choice);
if(choice<=0 || choice>5){
printf("Invalid choice! please enter a valid choice(1-5)\n");
}
switch(choice){
case 1:
printf("The addition of %d and %d is %d",num1,num2,(num1+num2));
break;
case 2:
printf("\nThe subtraction of %d and %d is %d",num1,num2,(num1-num2));
break;
case 3:
printf("\nThe multiplication of %d and %d is %d",num1,num2,(num1*num2));
break;
case 4:
if(num2 != 0)
printf("\nThe division of %d and %d is %d", num1, num2, (num1 / num2));
else
printf("\nError: Division by zero is not allowed!");
break;
case 5:
if(num2 != 0)
printf("\nThe modulus of %d and %d is %d", num1, num2, (num1 % num2));
else
printf("\nError: Modulus by zero is not allowed!");
break;
default:
printf("\nThankyou for using the calculator! Have a great day \n");
break;
}
printf("\nWould you want to perform operation again?. Press y or Y for yes and any other character for no\n");
scanf(" %c",&calculateagain);
} while(calculateagain=='y'|| calculateagain=='Y');
    return 0;
}