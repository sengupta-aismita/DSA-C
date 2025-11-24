#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node * top = NULL;

void push(int item){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if(top == NULL){
        newnode->next = NULL;
        top = newnode;
    }
    else{
        newnode->next = top;
        top = newnode;
    }
}

void pop(){
    if(top == NULL){
        printf("\nUnderflow");
        return 0;
    }
    struct node * ptr = top;
    printf("%d", ptr->data);
    top = ptr->next;
    free(ptr);
}

void peek(){
    if(top == NULL){
        printf("\nUnderflow");
        return 0;
    }
    printf("%d", top->data);
}


void display(){
    if(top == NULL){
        printf("\nUnderflow");
        return 0;
    }
    struct node * ptr = top;
    while(ptr != NULL){
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }

}

void main(){
    int ch;
    do{
        printf("\nEnter \n1.Push \n2.Pop \n3.Peek \n4.Display\n");
        scanf("%d", &ch);
        switch(ch){
          case 1: 
          printf("\nEnter item to be pushed : ");
          int i;
          scanf("%d", &i);
          push(i);
          break;

          case 2:
          pop();
          break;

          case 3: 
          peek();
          break;

          case 4: 
          display();
          break;

          default:
          printf("\nWrong choice ");

        }

    }while(ch != 5);
    
}