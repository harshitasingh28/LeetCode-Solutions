class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> arr(n);
        for(int i = 0;i<code.size();i++){
            if(k>0){
                int sum = 0;
                for(int j = 0;j<k;j++){
                    sum += code[(i+j+1)%n];
                }
                arr[i] = sum;
            }else if(k<0){
                int sum = 0;
                for(int j = 0;j<abs(k);j++){
                    sum += code[(i-j-1 + n)%n];
                }
                arr[i] = sum;
            }else{
                arr[i] = 0;
            }
        }
        return arr;
    }
};