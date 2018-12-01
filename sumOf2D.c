#include <stdio.h>

int input(int array[][3], int size);
int sum(int array[][3], int size);

int main()
{
    int num, i, result;
    int size = 3;
    int arr[size][size];

    input(arr, size);

    return (0);
}

int input(int array[][3], int size){
    int i, j;
    int result;
    for(i = 0; i < size; i++){
        for(j = 0; j < size; j++){
            printf("Enter value for row[%d], column[%d]: ", i+1,j+1);
            scanf("%d", &array[i][j]);
        }
        printf("\n");
    }
    sum(array, size);
}

int sum(int array[][3], int size){
    int i, j;
    int sum = 0;

    for(i = 0; i < size; i++){
        for(j = 0; j < size; j++){
            sum += array[i][j];
        }
        printf("The sum of row [%d] is = %d \n", i+1, sum);
        sum = 0;
    }

    for(i = 0; i < size; i++){
        for(j = 0; j < size; j++){
            sum += array[j][i];
        }
        printf("The sum of column [%d] is = %d \n", i+1 , sum);
        sum = 0;
    }

    for(i = 0; i < size; i++){
        printf("\n");
        for(j = 0; j < size; j++){
            printf("[%d] ", array[i][j]);
        }
    }
}
