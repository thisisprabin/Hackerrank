int findHeight(node *root){
	int lc = 0, rc = 0, result;
	
	if(root == NULL){
		return 0;
	} else {
		lc = findHeight(root->left);
		rc = findHeight(root->right);
		
		if(lc > rc){
			result = lc+1;
		} else {
			result = rc+1;
		}
	}
    
    return result;
}

void getNode(node *root, int level){
    if(root == NULL){
        return;
    } else if(level == 1){
        cout << root->data <<" ";
    } else {
        getNode(root->left, level-1);
        getNode(root->right, level-1);
    }
}

void LevelOrder(node * root){
    int i, h = findHeight(root);
    for(i=1; i<=h; i++){
        getNode(root, i);
    }
}

