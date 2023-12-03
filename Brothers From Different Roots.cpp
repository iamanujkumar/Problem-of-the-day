void inorder(Node* root,vector<int>&v){
    if(root==NULL) return;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}

    int countPairs(Node* root1, Node* root2, int x)
    {
        int count=0;
        vector<int>v;
        vector<int>v2;
        inorder(root1,v);
        inorder(root2,v2);
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v2.size();j++){
                if((v[i]+v2[j])==x) count++;
            }
        }
        return count;
    }