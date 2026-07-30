class Solution {
public:
    int minimumPushes(string word) {
        int l = word.length();
        int cnt = 0;
        for(int i = 0;i<l;i++){
           cnt += i/8 + 1;
        }
        return cnt;
    }
};