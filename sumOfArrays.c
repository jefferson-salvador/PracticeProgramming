#include <stdio.h>
#include <conio.h>

#define SIZE 3

int i, j;

int input(int arr[][SIZE]);

int main(){
    int array[SIZE][SIZE], sumArray[SIZE][SIZE] = {0};
    int numArray = 2;
    printf("Enter %d numbers. (%d PER ROW!) : \n", SIZE*SIZE, SIZE);

    while (numArray){

        input(array);

        for(i = 0; i < SIZE; i++){
            for(j = 0; j < SIZE; j++){
                sumArray[i][j] += array[i][j];
            }
        }
        numArray--;
    }

    printf("SUM: \n\n");

    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            printf("%d ", sumArray[i][j]);
        }
        printf("\n");
    }

    getch();
}

int input(int arr[][SIZE]){
    static int count = 1;
    printf("\nArray %d:\n\n", count);
    for(i = 0; i < SIZE; i++){
        printf("ROW %d: \n", i+1);
        for(j = 0; j < SIZE; j++){
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    count++;
}


//SUM OF ARRAYS
