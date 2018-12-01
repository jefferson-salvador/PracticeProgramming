#include <stdio.h>

void input(int arr[], int size);
void bubbleSort(int arr[], int size);
int binarySearch(int arr[], int size, int num);

int i, j;

void main()
{
    int array[100], size, result,num;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    input(array, size);

    bubbleSort(array, size);

    printf("Find number: ");
    scanf("%d", &num);

    result = binarySearch(array, size, num);

    if(result != size)
        printf("\nFound at location %d", result);
    else
       printf("Number is not in the list");
}

void input(int arr[], int size){

    printf("\nEnter %d numbers: \n", size);

    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
}

void bubbleSort(int arr[], int size){

    for(i = 0; i < size; i++){
        for(j = i + 1; j > i; j++){
            arr[i] += arr[j];
            arr[j] = arr[i] - arr[j];
            arr[i] -= arr[j];
        }
    }
}

int binarySearch(int arr[], int size, int num ){

    int low = 0;
    int high = size - 1;
    int mid;

    for(i = 2; i < size-1; i++){
        if (num == arr[low])
            return low;
        else if(num == arr[high])
            return high;
        else
            mid = (low + high) / 2;

        if (num == arr[mid])
            return mid;
        else if(num > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return size;
}
