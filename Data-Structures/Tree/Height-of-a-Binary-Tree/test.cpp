int getHeight(Node *root){
	int lc = 0, rc = 0, result;
	
	if(root == NULL){
		return 0;
	} else {
		lc = getHeight(root->left);
		rc = getHeight(root->right);
		
		if(lc > rc){
			result = lc+1;
		} else {
			result = rc+1;
		}
	}
    
    return result;
}

