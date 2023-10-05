#include <stdio.h>

int main()
{
    int number, sum = 0;
    printf("Enter The Number : \n");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        sum = sum + i;
    }
    printf("Sum is : %d \n", sum);

    return 0;
}