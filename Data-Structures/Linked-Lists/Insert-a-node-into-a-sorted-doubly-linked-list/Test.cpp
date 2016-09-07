Node* SortedInsert(Node *head,int data) {
	
	Node *temp, *start;

	temp = (Node *) malloc(sizeof(Node));
	temp->data = data;
	
	if(head==NULL){
		temp->prev = NULL;
		temp->next = NULL;
		
		return temp;
	} else {
		
		if(head->data >= data){
			temp->prev = NULL;
			temp->next = head;
			
			head->prev = temp;
			head = temp;
		} else {
			
			start = head;
			
			while(start->next != NULL && start->next->data <= data){
				start = start->next;
			}
			
			temp->prev = start;
			temp->next = start->next;
			
			if(start->next != NULL){
				start->next->prev = temp;
			}
			
			start->next = temp;
		}
	}
	
	return head;
}

