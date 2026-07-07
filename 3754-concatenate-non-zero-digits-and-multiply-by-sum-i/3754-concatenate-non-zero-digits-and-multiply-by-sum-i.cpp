class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0;
        long long sum = 0;
        int num = n;
        while(num != 0){
            int digit = num % 10;
            sum += digit;
            if(digit != 0){
                x = x * 10 + digit;
            }
            num = num/10;
        }
        num = x;
        long long s = 0;
        while(num!=0){
            int digit = num % 10;
            s = s * 10 + digit;
            num = num/10;
        }
        
        return s * sum;
    }
};