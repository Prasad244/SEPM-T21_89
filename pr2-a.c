//Quick Sort
#include <stdio.h>

int partition(int a[], int low, int high) {
    int pivot = a[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (a[i] <= pivot)
            i++;
        while (a[j] > pivot)
            j--;
        if (i < j) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    a[low] = a[j];
    a[j] = pivot;
    return j;
}

void quickSort(int a[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(a, low, high);
        quickSort(a, low, pivotIndex - 1);
        quickSort(a, pivotIndex + 1, high);
    }
}

void main() {
    int arr1[] = {2, 10, 3, 4, 7, 5, 1, 9, 8, 6};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    
    quickSort(arr1, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
}
