class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        int ans = 0;
        int right = 0;
        int left = 0;
        int aCnt = 0;
        int bCnt = 0;
        int cCnt = 0;
        for(int right = 0;right<n;right++){
            if(s[right] == 'a'){
                aCnt++;
            }else if(s[right] == 'b'){
                bCnt++;
            }else{
                cCnt++;
            }
            while(aCnt > 0 && bCnt > 0 && cCnt > 0){
                ans += n - right;
                if(s[left] == 'a'){
                    aCnt--;
                }else if(s[left] == 'b'){
                    bCnt--;
                }else{
                    cCnt--;
                }
                left++;
            }
        }
        return ans;
    }
};