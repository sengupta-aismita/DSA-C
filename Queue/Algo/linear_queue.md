# Algorithm for Linear Queue ----Enqueue

```c
void enqueue(int item){
    Step 1: if rear = size - 1 , print Overflow and exit
    Step 2: if front = -1 or front > rear
            set front = rear = 0
    Step 3: else rear++;
    Step 4: set arr[rear] = item        
}
```
# Algorithm for Linear Queue ----Dequeue
```c
void dequeue(){
    Step 1: if front = -1 or front > rear print Underflow and exit
    Step 2: print arr[front];
    Step 3: front++;

}