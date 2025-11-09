# Algorithm for Selection Sort

```c
void selectionSort(int *arr, int n){
    Step 1: set i, pos = -1, temp
    Step 2: Repeat Step 3 and 4 for i = 0 to n - 1
    Step 3: set pos = smallest(arr, i, n)
    Step 4: swap arr[pos] with arr[i]
    Step 5: end of loop
    Step 6: exit
}

int smallest(int *arr, int k, int n){
    Step 1: set small = arr[k], pos = k, j;
    Step 2: Repeat Step 3 and 4 for j = k+1 to n - 1
    Step 3: check if(small > arr[j])
            set small = arr[j]
            set pos = j
    Step 4: return pos;
    Step 5: end of loop
    Step 6: exit        
}
```
`**Time Complexity: O(n^2)**`