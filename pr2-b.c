//Merge sort
#include <stdio.h>

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    
     int leftArr[n1], rightArr[n2];
     
     for(int i =0; i < n1; i++)
         leftArr[i] = arr[l + i];
      for(int j =0; j < n2; j++)
         rightArr[j] = arr[m + 1  + j];
         
     int  i = 0 , j = 0 , k = l;
      while(i < n1 &&  j < n2){
          if(leftArr[i] <= rightArr[j]){
              arr[k] = leftArr[i];
              i++;
          } else {
              arr[k] = rightArr[j];
              j++;
          }
          k++;
      }
      
      while( i < n1){
          arr[k] = leftArr[i];
          i++;
          k++;
      }
      
      while( j < n2){
          arr[k] = rightArr[j];
          j++;
          k++;
      }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void main() {
    int arr1[] = {2, 10, 3, 4, 7, 5, 1, 9, 8, 6};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    mergeSort(arr1, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
}
