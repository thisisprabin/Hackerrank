Node* RemoveDuplicates(Node *head){
    Node * start, *temp;
	 
	if(head != NULL){
		start = head;
		while(start->next != NULL){
			
			if(start->data == start->next->data){
		
				if(start->next == NULL){
					temp = head;
					
					while(temp->next->next != NULL){
						temp =  temp->next;
					}
					
					if(temp->next->next == NULL){
						temp->next = NULL;
					}
				} else {
					start->next = start->next->next;
				}
				
			} else {
				start = start->next;
			}
		}	
	}
	 
	return head;
}

