class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        for(int i = 1;i<=9;i++){
            int digit = 0;
            for(int j = i;j<=9;j++){
                digit = digit*10 + j;
                if(digit >= low && digit <= high){
                    ans.push_back(digit);
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
        
    }
};