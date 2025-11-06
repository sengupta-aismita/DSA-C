# Algorithm for Insertion Sort

```c
void insertionSort(int *arr, int n){
    Step 1: set k, j, temp
    Step 2: Repeat Step 2 to 9 for k = 1 to n-1
    Step 3: set temp  = arr[k]
    Step 4: set j = k - 1
    Step 5: Repeat Step 6 to 7 while(temp <= arr[j] && j>=0)
    Step 6: set arr[j+1] = arr[j]
    Step 7: set j--;
    Step 8: exit while loop
    Step 9: arr[j+1] = temp;
    Step 10: exit for loop
    Step 11: exit
}
```
```**Best Case Time Complexity: O(n)**```
```**Worst Case Time Complexity: O(n^2)**```