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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev = new ListNode(0);
        ListNode* curr = head;
        head = prev;

        while(curr) {
            while(curr and curr->val == val) curr = curr->next;

            prev->next = curr;
            prev = curr;
            if(curr) curr = curr->next;
        }

        head = head->next;
        return head;
    }
};