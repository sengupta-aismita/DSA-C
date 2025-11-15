//Time complexity: O(nlogn)
//Space complexity: O(n)

#include<stdio.h>

void merge(int *arr, int beg, int mid, int end){
    int temp[end - beg +1]; //merging indices 0 to 3 needs 4 elements (3 - 0 + 1 = 4)
    int i = beg, j = mid+1, index = 0; //index of temp arr
    while(i<= mid && j<=end){
        if(arr[i]<= arr[j]){
            temp[index] = arr[i]; //storing smaller element in temp arr
            i++;
        }
        else{
            temp[index] = arr[j];
            j++;
        }
        index++;
    }
    //remaining elements storing in temp arr
    while(i<=mid){
        temp[index] = arr[i];
        i++;
        index++;
    }
    while(j<=end){
        temp[index] = arr[j];
        j++;
        index++;
    }
    for(i = beg; i<= end; i++){       
        arr[i] = temp[i-beg];
    }
    // Why Not Just temp[i]?
    // If you wrote arr[i] = temp[i]:
    // When i = 5: arr[5] = temp[5] (temp[5] doesn't exist! temp only goes 0-3)
    // This would cause an out-of-bounds error
}

void mergeSort(int *arr, int beg, int end){
    int mid;
    if(beg<end){  //recursive method so , if used
        mid = beg + (end - beg)/2;
        mergeSort(arr, beg, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, beg, mid, end);
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
    mergeSort(arr,0, n-1);
    printf("\nSorted array: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}