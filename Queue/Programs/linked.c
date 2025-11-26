#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int item){
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = item;
    if(front == NULL){
        front = rear = newnode;
        front->next = rear->next = NULL;
    }
    else{
        rear->next = newnode;
        rear = newnode;
        rear->next = NULL;
    }
}

void dequeue(){
     if(front == NULL){
        printf("\nUnderflow");
        return;
    }
    printf("%d\t", front->data);
    struct node * ptr = front;
    front = front->next;
    free(ptr);
}

void peek(){
    if(front == NULL){
        printf("\nUnderflow");
    }
    printf("%d\t", front->data);
}

void display(){
    if(front == NULL){
        printf("\nUnderflow");
        return;
    }
    struct node * ptr = front;
    while(ptr!=NULL){
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}



int main(){
    int ch;
    do{
        printf("\nEnter \n1.insertion \n2.deletion \n3.peek \n4.display \n");
        scanf("%d", &ch);
        switch(ch){
            case 1:
            int i;
            printf("\nEnter item to be inserted : ");
            scanf("%d", &i);
            enqueue(i);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            default:
            printf("\nWrong choice");

        }
    }while(ch != 5);
}