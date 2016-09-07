Node* Delete(Node *head, int position) {
	
	int i = 1;
	Node *temp, *start;
	
	if(head != NULL){
		
		if(position == 0){
			
			temp = head;
			
			head = head->next;
			free(temp);
			
			return head;
		} else {
			
			start = head;
			while(i != position){
				
				if(head == NULL){
					break;
				}
				
				start = start->next;
				i++;
			}
			
			if(i == position){
				
				if(start->next == NULL){
					
					temp = head;
					
					while(temp->next->next != NULL){
						temp =  temp->next;
					}
					
					if(temp->next->next == NULL){
						temp->next = NULL;
						
						return head;
					}
					
				} else {
					start->next = start->next->next;
					return head;
				}
			}
			
			if(i != position || head == NULL) {
				return head;
			}
		}
		
	} else {
		return head;
	}
	
	return head;
}

