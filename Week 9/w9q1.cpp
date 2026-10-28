#include <stdio.h>

long long factorial_recursive(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial_recursive(n - 1);
}

long long factorial_nonrecursive(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main()
{
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0 || n > 20)
    {
        printf("Enter an integer between 0 and 20.\n");
        return 0;
    }

    printf("Factorial using recursion = %lld\n",
           factorial_recursive(n));

    printf("Factorial without recursion = %lld\n",
           factorial_nonrecursive(n));

    return 0;
}
