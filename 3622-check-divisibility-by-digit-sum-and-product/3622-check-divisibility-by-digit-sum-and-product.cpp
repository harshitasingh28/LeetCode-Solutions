class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int prod = 1;
        int num = n;
        while(num != 0){
            int digit = num % 10;
            sum = sum + digit;
            prod = prod * digit;
            num = num / 10;
        }
        int total = sum + prod;
        if(n % total == 0){
            return true;
        }else{
            return false;
        }
    }
};