node *insert(node *root, int value) {
    
    node *temp = (node *) malloc(sizeof(node));
    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;
    
    if(root==NULL){
        root = temp;
    } else {
        if(value<root->data){
            root->left = insert(root->left, value);
        } else if(value > root->data){
            root->right = insert(root->right, value);
        }
    }

   return root;
}