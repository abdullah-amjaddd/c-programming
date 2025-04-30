#include<stdio.h>

int main(){
    typedef int abdullah;
    abdullah a=45;
/*here typedef keyword is used to create an alias for int data type now var
can also be used as a data type in c by using type def keyword.real life e.g
if a person name is john his friend can call him johnny where johnny is an alias
of john.here int is the data type and abdullah is variable but we use type def
keyword to use abdullah as a data type in c.most use ful in structure*/
    printf("%d\n",a);
    return 0;
}