int CompareLists(Node *headA, Node* headB){
    
    if(headA != NULL && headB != NULL){
		while(headA != NULL && headB != NULL){
			
			if(headA->data != headB->data){
				return 0;
			} 
			
			headA = headA->next;
			headB = headB->next;
		}
		
		if(headA != NULL || headB != NULL){
			return 0;
		} else {
			return 1;
		}	
	}
	
	if(headA != NULL || headB != NULL){
		return 0;
	}
	
	return 0;
}

