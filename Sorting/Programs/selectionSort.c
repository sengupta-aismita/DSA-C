//Time complexity O(n^2)
//Space complexity O(n)

#include<stdio.h>

int smallest(int *arr, int k, int n){
    int small = arr[k], pos = k, j;
    for( j = k + 1; j < n; j++){
        if( arr[j] <small){
            small = arr[j];
            pos = j;
        }
    }
    return pos;
}

void selectionSort(int *arr, int n){
    int i, pos = -1, temp;
    for( i = 0; i < n; i++){
        pos = smallest(arr, i, n);
        temp = arr[pos];
        arr[pos] = arr[i];
        arr[i] = temp;
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
    selectionSort(arr,n);
    printf("\nSorted array: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}