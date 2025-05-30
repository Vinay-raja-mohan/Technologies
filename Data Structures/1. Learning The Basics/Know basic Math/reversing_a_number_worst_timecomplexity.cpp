class Solution {
public:
    int reverse(int x) {
        
        if (x == INT_MIN) return 0;
        string str = to_string(x);
        string reversedStr;

        // Reverse the string manually
        for (int i = str.size() - 1; i >= 0; i--) {
            reversedStr += str[i];
        }

        // Convert back to integer
        long long reversedNum = stoll(reversedStr); // Use long long to handle overflow

        // Check for overflow
        if (reversedNum > INT_MAX || reversedNum < INT_MIN) {
            return 0; // Return 0 in case of overflow
        }

        return (x < 0) ? -reversedNum : reversedNum; // Restore the sign
    }

};
