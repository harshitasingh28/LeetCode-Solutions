class Solution {
public:
    bool judgeSquareSum(int c) {
        long long low = 0;
        long long high = sqrt(c);
        while(low <= high){
            long long sq = low * low + high * high;
            if(sq == c){
                return true;
            }else if(sq> c){
                high--;
            }else{
                low++;
            }
        }
        return false;
    }
};