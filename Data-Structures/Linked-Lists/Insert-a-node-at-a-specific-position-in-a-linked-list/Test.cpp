Node* InsertNth(Node *head, int data, int position){
         	
	int i = 1;
	Node *temp, *start;
	
	temp = new Node;
	
	temp->data = data;
	temp->next = NULL;

	if(position == 0){
		
		temp->next = head;
		head = temp;
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
				start->next = temp;
			} else {
				temp->next = start->next;
				start->next = temp;
			}
		} else if(i != position || head == NULL){
			head->next = temp;
			head = temp;
			return head;
		}
	
		return head;
	}
    return head;
}
