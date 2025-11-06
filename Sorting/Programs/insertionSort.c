//Best case O(n)
//Worst case O(n^2)
#include <stdio.h>

void insertionSort(int *arr, int n){
    int k, temp,j;
    for ( k = 1; k < n; k++)
    {
        temp = arr[k];
        j = k - 1;
        while (temp <= arr[j] && j>=0)
        {
           arr[j+1] = arr[j];
           j--;
        }
        arr[j+1] = temp;
    }
    
}

int main(){
    int n,i;
    printf("\nEnter size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements of the array: ");
    for(i = 0;i < n;i++){
       scanf("%d", &arr[i]);
    }
    insertionSort(arr,n);
    printf("\nSorted array: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}