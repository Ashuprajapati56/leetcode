class Solution {
public:
    int divide(int dividend, int divisor) {

        // Overflow case
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        // Determine sign of answer
        bool negative = (dividend < 0) ^ (divisor < 0);

        // Convert to long long and positive
        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);

        long long ans = 0;

        while (a >= b) {

            long long temp = b;
            long long multiple = 1;

            // Find largest multiple of di
            while (a >= (temp << 1)) {
                temp = temp << 1;
                multiple = multiple << 1;
            }

            a = a - temp;
            ans = ans + multiple;
        }

        if (negative)
            ans = -ans;

        return ans;
    }
};