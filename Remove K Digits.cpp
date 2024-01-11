class Solution {
  public:
    string removeKdigits(string s, int k) {
        
        stack<char>st;
        string str="";
        st.push(s[0]);
        for(int i=1;i<s.size();i++){
          while(!st.empty() && k>0 && st.top()>s[i]){
              st.pop();
              k--;
          }
          st.push(s[i]);
        }
        while(k>0){
            st.pop();
            k--;
        }
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        int len=str.size();
        int stindex=len;
        for(int i=0;i<len;i++){
            if(str[i]!='0'){
                stindex=i;
                break;
            }
        }
        str=(stindex==len)?"0": str.substr(stindex);
        return str;
    }
};