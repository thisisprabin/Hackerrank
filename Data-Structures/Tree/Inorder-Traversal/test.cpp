void inOrder(node *root) {
    if(root != NULL){
        inOrder(root->left);
        cout << root->data <<" ";
        inOrder(root->right);   
    }
}

