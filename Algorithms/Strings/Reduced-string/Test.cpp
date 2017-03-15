#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct stack{
	int top;
	int capacity;
	char *arr;
} Stack;

Stack *createStack(int capacity){
	Stack *stack = (Stack *) malloc(sizeof(Stack));
	stack->capacity = capacity-1;
	stack->top = -1;
	stack->arr = (char *) malloc(stack->capacity * sizeof(char));
	return stack;
}

bool isEmpty(Stack *stack){
	return (stack->top == -1) ? true : false;
}

bool isFull(Stack *stack){
	return (stack->capacity == stack->top) ? true : false;
}

void push(Stack *stack, char data){
	if(!isFull(stack)){
		stack->top++;
		stack->arr[stack->top] = data;
	}
}

void pop(Stack *stack){
	if(!isEmpty(stack)){
		stack->top--;
	}
}

char peek(Stack *stack){
	char data;
	if(!isEmpty(stack)){
		data = stack->arr[stack->top];
	}
	return data;
}

void printStack(Stack *stack){
	if(!isEmpty(stack)){
		for(int i=0; i<=stack->top; i++){
			cout << stack->arr[i];
		}
		cout << endl;
	} else {
		cout << "Empty String" <<endl;
	}
}

int main(){
	
	Stack *stack = createStack(100);
	
	char arr[100];
	cin >> arr;
	
	for(int i=0; arr[i]; i++){
		if(isEmpty(stack)){
			push(stack, arr[i]);
		} else {
			char data = peek(stack);
			if(data == arr[i]){
				pop(stack);
			} else {
				push(stack, arr[i]);
			}
		}
	}
	
	printStack(stack);
	
	return 0;
}
