#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node *head = NULL;

void insertion(int item){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = item;
    if(head == NULL){
        head = newnode;
        head->next = NULL;
        return;
    }
    struct node *ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = newnode;
    newnode->next = NULL;

}

int is_Prime(int item){
    if(item<= 1)
    return 0;
    int i;
    for(i = 2; i<= item/2; i++ ){
        if(item % i == 0)
        return 0;
    }
    if(i> item/2 && i != 1)
    return 1;
}

int main(){
    int n, copy, item;
    printf("\nEnter number of elements : ");
    scanf("%d", &n);
    copy = n;
    while(copy != 0){
        printf("\nEnter element : ");
        scanf("%d", &item);
        insertion(item);
        
        copy--;
    }
    struct node *ptr = head;
    printf("\nPrime elements are : ");
    while(ptr != NULL){
        if(is_Prime(ptr->data))
        printf("%d\t", ptr->data);
        ptr = ptr->next;
        
    }

    return 0;
}