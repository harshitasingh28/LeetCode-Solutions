class Solution {
public:
    int minOperations(string s) {
        //int cnt = 0;
        int n = s.length();
        char mn = *min_element(s.begin(), s.end());
        char mx = *max_element(s.begin(), s.end());
        
        string str = s;
        sort(str.begin(), str.end());
        if(s == str)return 0;
       if(n==2)return -1;
        if(mn == s[0] || mx == s[n-1]){
            return 1;
        }
        for(int i = 1;i<n-1;i++){
            if(s[i] == mn || s[i] == mx){
                return 2;
            }
        }
        if(mn != s[0] && mx != s[n-1]){
            return 3;
        }
        return 2;
    }
};