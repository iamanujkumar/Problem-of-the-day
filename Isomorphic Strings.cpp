class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        if(str1.size()!=str2.size()){
            return false;
        }
        unordered_map<char,char>mp1;
        unordered_map<char,char>mp2;
    
        for(int i=0;i<str1.length();i++){
            char ch1 = str1[i];
            char ch2 = str2[i];
            if(mp1[ch1]==0 && mp2[ch2]==0){
                mp1[ch1]=ch2;
                mp2[ch2]=ch1;
            }
            else {
            if(mp1[ch1]!=ch2 || mp2[ch2]!=ch1){
                return false;
            }
            }
            
        }
        
        
        return true;
        
    }
};