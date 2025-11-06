# Algorithm for Bubble Sort

```c
void bubbleSort(int *arr, int n){
    Step 1: set i, j, temp;
    Step 2: Repeat Step 3 to 5 for i = 0 to n-1
    Step 3: Repeat Step 4 to 5 for j = 0 to n-i-1
    Step 4: if(arr[j] > arr[j+1])
    Step 5: swap arr[j] & arr[j+1]
    Step 6: exit
}
