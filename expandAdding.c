#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numbers;
    int howMany;
    int sum = 0;
    int i;

    printf("How many numbers do you want to add? \n");
    scanf("%d", &howMany);

    numbers = (int *) malloc(howMany * sizeof(int));

    printf("Enter %d numbers: \n", howMany);
    for(i = 0; i < howMany; i++){
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("\nThe sum is: %d \n", sum);

    free(numbers);

    return 0;
}
