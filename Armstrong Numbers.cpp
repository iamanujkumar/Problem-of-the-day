class Solution {
public:
    string armstrongNumber(int n) {
        int sum = 0, temp = n, r;
        int numDigits = to_string(n).size();
        
        while (temp > 0) {
            r = temp % 10;
            sum += pow(r, numDigits); 
            temp /= 10;
        }
        
        if (sum == n) 
            return "Yes";
        else 
            return "No";
    }
};