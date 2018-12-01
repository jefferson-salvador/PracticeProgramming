#include <stdio.h>

void input(int arr[], int size);
void bubbleSort(int arr[], int size);
int binarySearch(int arr[], int size);

int i, j;

void main()
{
    int array[100], size, result,num;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    input(array, size);

    bubbleSort(array, size);

    printf("\nSorted: \n");

    for(i = 0; i < size; i++)
        printf("Element %d = %d\n", i+1, array[i]);

    result = binarySearch(array, size);

    if(result == -1)
        printf("\nNumber is not in the list.\n");
    else
        printf("\nFound at location %d\n", result + 1);
}

void input(int arr[], int size){

    printf("\nEnter %d numbers: \n", size);

    for(i = 0; i < size; i++){
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}

void bubbleSort(int arr[], int size){

    int temp;

    for(i = 0; i < size; i++){
        for(j = i + 1; j < size; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int size){

    int low = 0;
    int high = size - 1;
    int mid;
    int num;

    printf("\nFind number: ");
    scanf("%d", &num);

    while(low <= high){

        mid = (low + high) / 2;

        if (arr[low] == num)
            return (low);
        else if(arr[high] == num)
            return (high);
        else if(arr[mid] == num)
            return (mid);
        if(num > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(low > high)
        return (-1);
}
