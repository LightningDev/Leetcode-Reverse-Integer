class Solution {
public:
    int reverse(int x) {
        int result = 0;
        bool negative = false;
        if (x > 2147483647 || x < -2147483647 || x == 0) {
            return 0;
        } else if (x < 0) {
            x = x * -1;
            negative = true;
        }
        do {
            if (result > 214748364) {
                return 0;
            }
            result = result * 10 + (x % 10);
            x = x / 10;
        }
        while (x > 0);
        
        return negative ? result * -1 : result;
    }
};
