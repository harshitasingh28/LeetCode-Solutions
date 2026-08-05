class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxi = 0;
        int cnt = 0;
        for(int i = 0;i<s.length();i++){
            if(s[i] == '('){
                st.push(s[i]);
                cnt++;
                maxi = max(maxi, cnt);
            }
            if(s[i] == ')'){
                st.pop();
                cnt--;
            }
        }
        return maxi;
    }
};