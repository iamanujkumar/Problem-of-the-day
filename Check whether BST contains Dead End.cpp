class Solution{
  public:
 void inorder(Node* root, unordered_set<int>& v1, vector<int>& v2) {
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL) v2.push_back(root->data);
    else v1.insert(root->data);
    inorder(root->left, v1, v2);
    inorder(root->right, v1, v2);
}

bool isDeadEnd(Node* root) {
    unordered_set<int> v1;
    vector<int> v2;
    inorder(root, v1, v2);
    
    for (int i = 0; i < v2.size(); i++) {
        int current = v2[i];
        if ((v1.find(current - 1) != v1.end() && v1.find(current + 1) != v1.end()) ||
            (current == 1 && v1.find(current + 1) != v1.end()) ||
            (current == INT_MAX && v1.find(current - 1) != v1.end())) {
            return true;
        }
    }
    return false;
}
};