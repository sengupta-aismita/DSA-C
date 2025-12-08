#include<stdio.h>

int interpolationSearch(int *arr,  int n, int key){
    int pos = -1, low = 0, high = n-1;
    while(low<=high){
        int mid = low + ((key - arr[low]) * (high - low))/(arr[high] - arr[low]);
        if(arr[mid] == key){
            pos = mid;
            return pos;
            break;
        }
        else if( key < arr[mid])
        high = mid - 1;
        else
        low = mid + 1;

    }
}


int main(){
     int n, i, key;
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements in the array : ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("\nEnter key to be searched : ");
    scanf("%d", &key);

     printf("\nFound in the array at idx : %d ",interpolationSearch(arr, n, key));


    return 0;
}