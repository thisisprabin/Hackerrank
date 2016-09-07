#include<iostream>
#include<stdlib.h>
using namespace std;


void print(Node *head);
Node * insert(Node *head, int data);

Node * insert(Node *head, int data){
    Node * temp;
    
    temp = new Node;
    temp->data = data;
    temp->next = NULL;
    
    if(head==NULL){
        head = temp;
    } else {
        while(head->next != NULL){
            head = head->next;
        }
        
        head->next = temp;
        head = temp;
    }
    
    return head;
}

void Print(Node *head){
	
	while(head!=NULL){
		cout << head->data << endl;
		head=head->next;
	}
}
