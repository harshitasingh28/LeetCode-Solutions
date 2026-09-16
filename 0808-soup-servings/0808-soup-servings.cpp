class Solution {
public:
    double solve(int A, int B, int n, vector<vector<double>>& dp){
        if(A <= 0 && B <= 0){
            return 0.5;
        }
        if(A <= 0){
            return 1;
        }
        if(B <= 0){
            return 0;
        }
        if(dp[A][B] != -1)return dp[A][B];

        double op1 = solve(A-4, B-0, n, dp);
        double op2 = solve(A-3, B-1, n, dp);
        double op3 = solve(A-2, B-2, n, dp);
        double op4 = solve(A-1, B-3, n, dp);

        return dp[A][B] = (0.25 *(op1 + op2 + op3 + op4));
    }
    double soupServings(int n) {
        if(n>5000)return 1.0;
        vector<vector<double>> dp(n+1, vector<double>(n+1, -1.0));
        n = ceil(n/25.0);
        return solve(n, n, n, dp);
    }
};