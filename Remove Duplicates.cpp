class Solution {
  public:

    string removeDups(string str) {
        // Your code goes here
         string s="";
        set<char>st;
        for(char ch:str){
            if(st.find(ch)==st.end()){
                s+=ch;
                st.insert(ch);
            }
        }
        return s;
    }
};