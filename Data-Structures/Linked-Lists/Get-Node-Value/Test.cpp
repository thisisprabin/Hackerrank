int GetNode(Node *head, int positionFromTail){
    int count = 0, ans, i=0;
	Node * start = head;
	
	if(head != NULL){
		while(head!=NULL){
			head = head->next;
			count += 1;
		}
	}
	
	ans = count - positionFromTail;
	while(i!=ans-1){
		start = start->next;
		i++;
	}
	return start->data; 
}
