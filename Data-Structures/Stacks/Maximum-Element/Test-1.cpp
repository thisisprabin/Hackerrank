#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct stack {
	int top;
	int capacity;
	int *arr;
} Stack;

Stack *init(Stack *stack, int capacity){
	stack = (Stack *) malloc(sizeof(Stack));
	stack->capacity = capacity;
	stack->arr = (int *) malloc(stack->capacity * sizeof(int));
	stack->top = -1;
	
	return stack;
}

int isEmpty(Stack *stack){
	if(stack->top == -1){
		return 1;
	} else {
		return -1;
	}
}

int isFull(Stack *stack){
	if(stack->top == stack->capacity){
		return 1;
	} else {
		return -1;
	}
}

void push(Stack *stack, int value){
	if(isFull(stack) == -1){
		stack->top++;
		stack->arr[stack->top] = value;
	} else {
		return;
	}
}

void pop(Stack *stack){
	if(isEmpty(stack) == -1){
		stack->arr[stack->top];
		stack->top--;
	} else {
		return;
	}
}

int printList(Stack *head){
	
	int key;
	
	if(isEmpty(head)!=1){
		for(int i=head->top; i>=0; i--){
			key = head->arr[i];
			for(int j=head->top; j>=0; j--){
				if(key <= head->arr[j]){
					key = head->arr[j];
				}
			}
		}	
	}
    return key;
}

int main(){
	
	Stack *stack;
	int data, ch, value, ack;
	
	cin >> value;
	stack = init(stack, value);
	
	for(int i=0; i<value; i++){
		cin >> ch;
		switch(ch){
			case 1: cin >> data;
					push(stack, data);
			break;
			
			case 2: pop(stack);
			break;
			
			case 3: cout << printList(stack) << endl;
			break;			
		}
	}
	return 0;
}
