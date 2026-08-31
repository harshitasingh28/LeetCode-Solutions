/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> nums;
        ListNode* curr = head;
        while(curr!=NULL){
            nums.push_back(curr->val);
            curr=curr->next;
        }
        vector<int> cp;
        int n = nums.size();

        for(int i = 1;i<n-1;i++){
            if(nums[i]>nums[i-1] && nums[i] > nums[i+1]){
                cp.push_back(i);
            }
            else if(nums[i]<nums[i-1] && nums[i]<nums[i+1]){
                cp.push_back(i);
            }
        }
        if(cp.size() < 2){
            return {-1, -1};
        }
        int minDis = INT_MAX;
        int maxDis = cp[cp.size()-1] - cp[0];

        for(int i = 1;i<cp.size();i++){
            minDis = min(minDis, cp[i] - cp[i-1]);
        }
        return {minDis, maxDis};
    }
};