// 8. Create a structure representing a bank account of a customer. What fields did
// you use and why?
#include<stdio.h>
struct bank{
int accno;
char countrycode[3];
char bankcode[20];
double balance;
};
int main(){
struct bank b1={0000001123456702,"pak","Scbl",43.000};
//note the repeating word in int is not shown on the output more than once
//0000001123456702 0 will be showed only once output 156130754
printf("Below are the details of the bank account of a customer:\n");
printf("The account number of the customer is %d\n",b1.accno);
printf("The country code of the customer is %s\n",b1.countrycode);
printf("The bank code of the customer is %s\n",b1.bankcode);
printf("The current balance of the customer is %.3lf\n",b1.balance);
    return 0;
}