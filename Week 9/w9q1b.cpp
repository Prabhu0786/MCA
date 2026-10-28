#include <stdio.h>
#include <stdlib.h>

int gcd_recursive(int a, int b)
{
    if (b == 0)
        return a;
    return gcd_recursive(b, a % b);
}

int gcd_nonrecursive(int a, int b)
{
    int temp;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    a = abs(a);
    b = abs(b);

    if (a == 0 && b == 0)
    {
        printf("GCD of 0 and 0 is undefined.\n");
        return 0;
    }

    printf("GCD using recursion = %d\n",
           gcd_recursive(a, b));

    printf("GCD without recursion = %d\n",
           gcd_nonrecursive(a, b));

    return 0;
}
