class Solution {
public:
  
    bool checkPangram(string s) {
        std::unordered_set<char> charSet;

        for (char ch : s) {
            ch = tolower(ch);
            if (isalpha(ch)) {
                charSet.insert(ch);
            }
        }
        return charSet.size() == 26;
    }
};