class Solution {
public:
    bool isSubstringPresent(string s) {
        int n = s.length();
        string rev = s;
        reverse(rev.begin(), rev.end());
        for(int i = 0;i<n-1;i++){
                string substring = s.substr(i, 2);
                    if(rev.find(substring) != string::npos){
                      return true;
                      break; 
                    }
        }
        return false;
    }
};