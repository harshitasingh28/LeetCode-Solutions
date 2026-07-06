class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<int> dp(n, 1);
        vector<int> hash(n);
        int lastIdx = 0;
        int maxi = 1;
        
        for(int i = 0;i<n;i++){
            hash[i] = i;
            for(int j = 0;j<i;j++){
                if(arr[i] % arr[j] == 0 && 1+dp[j]>dp[i]){
                    dp[i] = 1 + dp[j];
                    hash[i] = j;
                }
            }
            if(dp[i]> maxi){
               maxi = dp[i];
               lastIdx = i;
            }
        }
        vector<int> temp;
        temp.push_back(arr[lastIdx]);
        while(hash[lastIdx]!=lastIdx){
            lastIdx = hash[lastIdx];
            temp.push_back(arr[lastIdx]);
        }
      //  temp.push_back(arr[lastIdx]);
        reverse(temp.begin(), temp.end());
        return temp;
    }
};