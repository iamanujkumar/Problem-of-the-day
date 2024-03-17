class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
         Node* temp1 = head1;
    Node* temp2 = head2;
    vector<int> v1;
    vector<int> v2;
    int count = 0;

    while (temp1 != NULL) {
        v1.push_back(temp1->data);
        temp1 = temp1->next;
    }

    while (temp2 != NULL) {
        v2.push_back(temp2->data);
        temp2 = temp2->next;
    }

    set<int> st;
    for (int i = 0; i < v2.size(); i++) {
        st.insert(v2[i]);
    }

    for (int i = 0; i < v1.size(); i++) {
        if (st.find(x - v1[i]) != st.end()) {
            count++;
        }
    }
    return count;
    }
};