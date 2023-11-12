class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        if (str1.length() != str2.length() || str1.length() <= 2) {
        return false;
        }
        if (str1 == str2) {
        return false;
        }

        string str = str1 + str1;

        return str.find(str2) != string::npos;
    }

};