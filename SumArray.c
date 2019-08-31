
#include <stdio.h>

int arraySum(int myArray[], int size);

void main()
{
    int num, i, j;

    printf("Enter the number of array value: ");
    scanf(" %d", &num);

    int numArray[num];

    for(i = 0; i < num; i++){
        printf("numArray[%d] = ", i);
        scanf(" %d", &numArray[i]);
    }

    printf("numArray[%d] = {", num);

    for(j = 0; j < num; j++){
        printf(" %d%c", numArray[j], (j==num-1) ? ' ' : ',');
    }

    printf("} \n");

    printf("Sum = %d", arraySum(numArray,num));
}

int arraySum(int myArray[], int size)
{
    int i, sum = 0;

    for(i = 0; i < size; i++){
        sum += myArray[i];
    }

    return (sum);

}


