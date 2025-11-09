# Algorithm for Merge Sort

# Merge function
```c
void merge(int *arr, int beg, int mid, int end){
    int temp[end - beg +1];
    int i = beg, j = mid+1, index =0;
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp[index] = arr[i];
            i++;
        }
        else{
            temp[index] = arr[j];
            j++;
        }
        index++;
    }
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
    for(i = beg; i<=end; i++){
        arr[i] = temp[i - beg];
    }
}
```
# Merge Sort recursive function
```c
void mergeSort(int *arr, int beg, int end){
    int mid;
    if(beg<= end){
        mergeSort(arr, beg, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, beg, mid, end);
    }
}
```