#include <stdio.h>

long int multiplyNumbers(int n);

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n) /// initiation
{

    if (n >= 1) /// condition

        return n*multiplyNumbers(n-1); ///decrementation
    else
        return 1;
}
