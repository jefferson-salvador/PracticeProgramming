#include <stdio.h>

int square(int);
int sum = 0;

int main(){

    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = square(num);

    printf("The sum is: %d", result);

    return (0);
}

int square(int x)
{
    int temp;
    int product;

    if(x > 0)
    {
        temp = x;
        product = 1;

        while(temp > 0)
        {
            product *=x;
            temp--;
        }

        sum += product;
        square(x-1);
    }

    return (sum);
}

