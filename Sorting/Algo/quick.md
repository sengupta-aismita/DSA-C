# Algorithm for Quick Sort

# Partition function
```c
int partition(int *arr, int beg, int end){
    int temp, left = beg, right = end, loc = left, flag = 0;
    while(flag == 0){
        while(arr[loc] <= arr[right] && loc != right){
            right--;
        }
        if(loc == right)
        flag = 1;
        else if(arr[loc] > arr[right]){
            temp = arr[loc];
            arr[loc] = arr[right];
            arr[right] = temp;
            loc = right;
        }
        if(flag == 0){
            while(arr[loc] >= arr[left] && left != loc){
                left++;
            }
            if(loc == left)
            flag = 1;
            else if(arr[loc] < arr[left]){
                temp = arr[loc];
                arr[loc] = arr[left];
                arr[left] = temp;
                loc = left;
            }
        }
    }
    return loc;
}
```
# Quick Sort recursive function
```c
void quickSort(int *arr, int beg, int end){
    if(beg<end){
        int loc = partition(arr, beg, end);
        quickSort(arr, beg, loc-1);
        quickSort(arr, loc+1, end);
    }
}
```