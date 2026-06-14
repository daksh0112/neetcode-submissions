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
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* curr = slow;
        ListNode* prev = nullptr;
        while(curr){
        ListNode* temp = curr->next;
        curr->next = prev;
        prev = curr ; 
        curr = temp;
        }

        curr = prev;

        int res = 0 ;

        while(head && curr){
            res = max (res, curr->val+head->val);
            head=head->next;
            curr=curr->next;
        }
        return res;

    }
};