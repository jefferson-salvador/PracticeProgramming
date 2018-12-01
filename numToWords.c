#include <stdio.h>

int main()
{
    int number;

    printf("Enter a two digit number: ");
    scanf("%d", &number);

    switch(number){
        case 11:
            printf("Eleven");
            number -= number;
            break;
        case 12:
            printf("Twelve");
            number -= number;
            break;
        case 13:
            printf("Thirteen");
            number -= number;
            break;
        case 14:
            printf("Fourteen");
            number -= number;
            break;
        case 15:
            printf("Fifteen");
            number -= number;
            break;
        case 16:
            printf("Sixteen");
            number -= number;
            break;
        case 17:
            printf("Seventeen");
            number -= number;
            break;
        case 18:
            printf("Eighteen");
            number -= number;
            break;
        case 19:
            printf("Nineteen");
            number -= number;
            break;
        case 10:
            printf("Ten");
            number -= number;
    }
    switch(number/10)
    {
        case 2:
            printf("Twenty");
            break;
        case 3:
            printf("Thirty");
            break;
        case 4:
            printf("Forty");
            break;
        case 5:
            printf("Fifty");
            break;
        case 6:
            printf("Sixty");
            break;
        case 7:
            printf("Seventy");
            break;
        case 8:
            printf("Eighty");
            break;
        case 9:
            printf("Ninety ");
            break;
    }
    switch(number % 10)
    {
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
    }

    return (0);

}
