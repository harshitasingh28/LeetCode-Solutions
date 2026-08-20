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
    ListNode* insertionSortList(ListNode* head) {
        vector<int> arr;
        ListNode* curr = head;
        while(curr!=NULL){
            arr.push_back(curr->val);
            curr = curr->next;
        }
        sort(arr.begin(), arr.end());
        ListNode* dummy = new ListNode(0);
        ListNode* no = dummy;
        for(int i = 0;i<arr.size();i++){
            ListNode* temp = new ListNode(arr[i]);
            no->next = temp;
            no = no->next;
        }
        return dummy->next;
    }
};