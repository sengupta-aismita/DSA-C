#include <stdio.h>
#define SIZE 5
int front = -1, rear = -1;
int arr[SIZE];

void insertion(int item){
   if(( front == 0 && rear == SIZE - 1) || front == rear + 1){
    printf("\nOverflow");
    return;
   }
   if(front == -1){ //empty
    front = 0;
    rear = 0;
   }
   else if(rear == SIZE - 1){ //rear at end
    rear = 0;
   }
   else{
    rear++; 
   }
   arr[rear] = item;
   printf("%d", arr[rear]);
   
}

void deletion(){
    if(front == -1){
        printf("\nUnderflow");
        return;
    }
    printf("%d", arr[front]);
    if(front == rear){ //only one element, initialize to -1
        front = -1;
        rear = -1;
    }
    if(front == SIZE - 1) //front is at last element, wrap it around
    front = 0;
    else
    front++;
}

void display(){
    if(front == -1){
        printf("\nUnderflow");
    }
    int i;
    if(front>rear){
       for(i= front; i< SIZE;i++)
       printf("%d\t", arr[i]);
       for(i = 0; i < rear; i++ ){
        printf("%d\t", arr[i]);
       }
    }
    else{
        for(i = front; i<=rear; i++){
        printf("%d\t", arr[i]);
    }
    }
   
}

int main(){
    int ch;
    do{
        printf("\n Enter \n1.insertion \n2.deletion \n3, display \n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: 
            int i;
            printf("Enter item to be inserted : ");
            scanf("%d", &i);
            insertion(i);
            break;
            case 2:
            deletion();
            break;
            case 3:
            display();
            break;
            break;
            case 4:
            printf("\nWrong choice");
        }


    }while(ch != 4);
    return 0;
}