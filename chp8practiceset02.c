// 3. Write your own version of strlen function from <string.h>
#include <stdio.h>
// Custom implementation of strlen
int my_strlen( char str[100])//string is stored in the parameter string
{
    int length = 0;
    while (str[length] != '\0')//the condition remains true until null character is encountered
    //this means it does not count null character
    {
        length++;
    }
    return length;
}
int main()
{
    char myString[100];

    printf("Enter a string: ");
    scanf("%s", myString); // Note: scanf will not take spaces

    int len = my_strlen(myString);//passing string to function
    printf("The length of the string is: %d\n", len);

    return 0;
}