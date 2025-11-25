#include<stdio.h>
#define SIZE 100
int front = -1, rear = -1;
int arr[SIZE];

void enqueue(int item){
    if(rear == SIZE-1){
        printf("\nOverflow");
        return;
    }
    if(front == -1 || front> rear)
    front= rear =0;
    else
    rear++;
    arr[rear] = item;
}

void dequeue(){
    if(front == -1 || front>rear){
        printf("\nUnderflow");
        return;
    }
    printf("%d", arr[front]);
    front++;
}

void display(){
    if(front == -1 || front> rear){
        printf("\nUnderflow");
        return;
    }
    for(int i = front; i<= rear; i++){
        printf("%d", arr[i]);
    }
}

int main(){
     int s;
     printf("\nEnter \n1.Enqueue \n2.Dequeue \n3.Display");
     scanf("%d", &s);
     do{
        switch(s){
            case 1: printf("\nEnter item to be pushed : ");
            int i;
            scanf("%d", &i);
            break;
            case 2: 
            dequeue();
            break;
            case 3: 
            diaplay();
            case 4: 
            printf("\nInvalid choice");
     }

     }while(s!=4);
    
}