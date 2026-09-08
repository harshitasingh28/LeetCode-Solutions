class Solution {
public:
    int countCommas(int n) {
        int cnt = 0;
        for(int i = n;i>=1000;i--){
            int num = i;
            int size = 0;
            while(num!=0){
                size++;
                num/=10;
            }
            cnt+=(size-1)/3;
        }
        return cnt;
    }
};