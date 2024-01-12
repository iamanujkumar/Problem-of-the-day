class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        queue<int>que;
        stack<int>st;
        while(k--){
            st.push(q.front());
            q.pop();
        }
        vector<int>v;
        while(!q.empty()){
            v.push_back(q.front());
            q.pop();
        }
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        for(int i=0;i<v.size();i++){
            q.push(v[i]);
        }
        return q;
    }
};