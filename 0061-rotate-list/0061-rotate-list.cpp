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
    ListNode* insertAtEnd(ListNode* head, int data){
        ListNode* node = new ListNode(data);
        if(head == NULL)return node;
        ListNode* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = node;
        return head;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL)return head;
        if(head->next == NULL)return head;
        if(k == 0)return head;

        vector<int> arr;
        ListNode* temp = head;
        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        vector<int> t(arr.size(), 0);
        for(int i = 0;i<arr.size();i++){
            t[(i+k)%arr.size()] = arr[i];
        }
        arr = t;
        ListNode* root = NULL;
        for(int i = 0;i<arr.size();i++){
            root = insertAtEnd(root, arr[i]);
        }
        return root;
    }
};