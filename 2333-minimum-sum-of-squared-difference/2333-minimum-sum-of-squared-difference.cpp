
class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2,
                               int k1, int k2) {
        vector<int> difference(100001, 0);

        for (int i = 0; i < nums1.size(); i++) {
            difference[abs(nums1[i] - nums2[i])]++;
        }

        long long left = (long long)k1 + k2;

        for (int i = 100000; i >= 1; i--) {
            int acc = difference[i];

            if (acc <= left) {
                difference[i - 1] += difference[i];
                difference[i] = 0;
                left -= acc;
            } else {
                difference[i] -= left;
                difference[i - 1] += left;
                left = 0;
                break;
            }
        }

        long long answer = 0;

        for (int i = 1; i <= 100000; i++) {
            answer += 1LL * difference[i] * i * i;
        }

        return answer;
    }
};
