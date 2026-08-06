class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans = 0;
        for(int i = n;i<=100;i++){
            int prod = 1;
            int num = i;
            while(num!=0){
                int digit = num % 10;
                prod *= digit;
                num /= 10;
            }
            if(prod%t == 0){
                ans = i;
                break;
            }
        }
        return ans;
    }
};