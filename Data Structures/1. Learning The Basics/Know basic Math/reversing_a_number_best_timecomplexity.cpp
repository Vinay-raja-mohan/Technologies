class Solution {
public:
    int reverse(int x) {
        
        if (x == INT_MIN) return 0;
        int temp=abs(x);
            int digit,rev=0;
        while(temp>0){
        
            digit = temp%10;
            temp = temp/10;

            if (rev > (INT_MAX - digit) / 10) {
                return 0;  // Return 0 in case of overflow
            }
            rev = rev *10 + digit;
            
        }
        if(x>0){
            return rev;
        }
        else{
            return -rev;
        }
    }
};
