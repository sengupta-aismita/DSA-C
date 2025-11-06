//Bubble sort
//worst time complexity O(n^2)

#include<stdio.h>

void bubbleSort(int *arr, int n){
    int i,j, temp;
    for(i = 0; i< n; i++){
        for(j= 0; j < n-i-1;j++){
            if(arr[j] < arr[j+1]){
               temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int n,i;
    printf("Enter number of elements in the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements of the array : ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printf("\nThe sorted array is : ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
}