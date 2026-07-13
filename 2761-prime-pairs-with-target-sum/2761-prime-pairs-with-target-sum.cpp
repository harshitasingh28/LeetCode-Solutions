class Solution {
public:
    bool prime(int n){
        if(n<=1)return false;
        for(int i = 2;i*i<=n;i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>> result;
        for(int i = 1;i<=n/2;i++){
            if(prime(i) && prime(n-i)){
                result.push_back({i, n-i});
            }
        }
        if(result.empty())return {};
        return result;
    }
};