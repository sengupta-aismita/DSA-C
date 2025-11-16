#include<stdio.h>
#define size 6
int arr[size];
int top = -1;

void push(int item){  //O(n)
   if(top == size-1){
    printf("\nOverflow");
    return;
   }
   top++;
   arr[top] = item;
}

void pop(){  //O(1)
      if(top == -1){
    printf("\nUnderflow");
    return;
   }
   printf("%d ", arr[top]);
   top--;
    
}

void peek(){ //O(1)
    if(top == -1){
    printf("\nUnderflow");
    return;
   }
   printf("%d ", arr[top]);
}

void display(){  //O(n)
    if(top == -1){
    printf("\nUnderflow");
    return;
   }
   int i = top;
   while(i>=0){
    printf("%d ", arr[i]);
    i--;
   }
}

int main(){
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
    
    return 0;
}