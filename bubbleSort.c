#include <stdio.h>

void input(int array[], int size);
void bubbleSort(int array[], int size);

void input(int array[],int size);

void main(){
    int i,size, array[100];

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    input(array, size);

    printf("\nBefore bubble sort: \n");

    for(i = 0; i < size; i++){
        printf("Element [%d]: %d \n", i+1, array[i]);
    }

    bubbleSort(array, size);

    printf("\nAfter bubble sort: \n");

    for(i = 0; i < size; i++){
        printf("Enter element [%d]: %d \n", i+1, array[i]);
    }
}

void input(int array[], int size)
{
    int i;

    for(i = 0; i < size; i++){
        printf("Enter element [%d]: ", i+1);
        scanf("%d", &array[i]);
    }
}


void bubbleSort(int array[], int size)
{
    int i, j;

    for(i = 0; i < size; i++){
        for(j = i + 1; j < size; j++){
            if(array[i] > array[j]){
                array[i] = array[i] + array[j];
                array[j] = array[i] - array[j];
                array[i] = array[i] - array[j];
            }

        }
    }
}

