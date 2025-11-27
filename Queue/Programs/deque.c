#include<stdio.h>
#define SIZE 5
int arr[SIZE];
int left = -1, right = -1;

void insert_left(int item){
    if((left == SIZE - 1 && right == 0) || left == right + 1 ){
        printf("\nOverflow");
        return;
    }
    if(left == -1){
        left = 0;
        right = 0;
    }
    if(left == 0){
    left = SIZE - 1;
    }
    left--;
    arr[left] = item;
}

int main(){
    int ch;
    do{
        printf("\nEnter \n1.insert left \n2.insert right \n3.delete left \n4.delete right \n");
        scanf("%d", &ch);
        switch(ch){
            case 1: 
            printf("Enter item to be inserted : ");
            int i;
            scanf("%d", &i);
            insert_left(i);
            break;
            case 2: 
            printf("Enter item to be inserted : ");
            int i;
            scanf("%d", &i);
            insert_right(i);
            break;
            case 3:
            delete_left();
            break;
            case 4:
            delete_right();
            break;
            default:
            printf("\nInavlid option");
        }
    }while(ch != 5);
}