class Solution {
public:
    int countDigits(int num) {
        int cnt = 0;
        int n = num;
        while(n!= 0){
            int digit = n%10;
            if(digit != 0 && num % digit == 0){
                cnt++;
            }
            n/=10;
        }
        return cnt;
    }
};