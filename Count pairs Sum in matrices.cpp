class Solution{
public:	
	
int countPairs(vector<vector<int>> &mat1,vector<vector<int>> &mat2, int n, int x) {
    int count = 0;
    unordered_set<int> st;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            st.insert(mat2[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int target = x - mat1[i][j];
            if (st.find(target) != st.end()) {
                count++;
            }
        }
    }
    return count;
}

};
