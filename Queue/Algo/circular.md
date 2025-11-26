# Algorithm for Circular Queue ---Insertion

```c
void insertion(int item){
    Step 1: Check overflow condition
            if (front = 0 and rear = SIZE - 1) or front + 1 = rear
            printf "Overflow"
            exit
    Step 2: if front = -1 set front = 0 and rear = 0 //if queue empty
    Step 3: if rear = SIZE - 1, set rear = 0 //reinitialise rear
    Step 4: else rear++   
    Step 5: set arr[rear] = item     
}
```

# Algorithm for Circular Queue ---Deletion

```c
void deletion(){
    Step 1: Check Underflow condition
            if( front == -1 )
            print "Underflow"
            exit
    Step 2: print arr[front]        
    Step 3: Check if only one element present
            if front = rear
            set front = -1 and rear = -1
    Step 4: Check if front is at the end
            if front = SIZE - 1 
            set front = 0
    Step 5: front++        

}
```