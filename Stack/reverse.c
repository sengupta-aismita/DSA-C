// Write a C program that accepts a string and reverse it using a stack.

// Sample input 
// king 
// Output
// gnik 

#include<stdio.h>
#define SIZE 10
char arr[SIZE];
int top = -1;

void push(char ch){
    if(top == SIZE-1){
        printf("\nOverflow");
        return;
    }
    top++;
    arr[top] = ch;

}

void display(){
    while(top >= 0){
        printf("%c", arr[top]);
        top--;
    }
    
}

int main(){
    char str[SIZE];;
    scanf("%s",str);
    int i = 0;
    while(str[i] != '\0'){
       push(str[i]);
       i++;
    }
    display();

    return 0;
}