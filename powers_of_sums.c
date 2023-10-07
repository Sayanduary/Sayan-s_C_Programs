
#include <stdio.h>
#include <math.h>

int main()
{
    int sum = 1, n, x;
    printf("Enter The Value of X :: \n");
    scanf("%d", &x);
    printf("Enter The Value of N : \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += pow(x, i);
    }
    printf("The Sum is : %d \n", sum);

    return 0;
}