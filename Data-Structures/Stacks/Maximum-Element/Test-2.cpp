#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct stack{
	int data;
	struct stack *next;
} Stack;

Stack *init(int data){
	Stack *temp = (Stack *) malloc(sizeof(Stack));
	temp->data = data;
	temp->next = NULL;
	return temp;
}

Stack *push(Stack *head, int data){
	Stack *temp = init(data);
	if(head == NULL){
		head = temp;
	} else {
		temp->next = head;
		head = temp;
	}
	return head;
}

Stack *pop(Stack *head){
	Stack *temp;
	if(head != NULL){
		temp = head;
		head = head->next;
		free(temp);
	}
	return head;
}

int printList(Stack *head){
	int value;
	Stack *start;
	
	if(head != NULL){
		start = head;
		value = start->data;
		while(start != NULL){
			if(start->data > value){
				value = start->data;
			}
			start = start->next;
		}	
	}
	return value;
}

int main(){
	
	Stack *head = NULL;
	int data, ch, test;
	
	cin >> test;
	for(int i=0; i<test; i++){
		cin >> ch;
		switch(ch){
			case 1: cin >> data;
					head = push(head, data);
			break;
			
			case 2: head = pop(head);
			break;
			
			case 3: cout << printList(head) << endl;
			break;			
		}
	}
	
	return 0;
}