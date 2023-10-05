#include <stdio.h>

int main()
{
    int number, temp, reversed, rem;
    printf("Enter The Number : \n");
    scanf("%d", &number);
    temp = number;
    while (number != 0)
    {
        rem = number % 10;
        reversed = reversed * 10 + rem;
        number = number / 10;
    }
    if (temp == reversed)
    {
        printf("It's A Palindrome Number \n");
    }
    else
    {
        printf("It's Not A Palindrome Number \n");
    }
    return 0;
}