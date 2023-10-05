#include <stdio.h>

int main()
{
    int number, fact = 1, sum = 0;
    printf("Enter The Number : \n");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        fact = fact * i;
        sum = sum + fact;
    }
    printf("The Sum Of Factorial of %d is %d \n", number, sum);
    return 0;
}