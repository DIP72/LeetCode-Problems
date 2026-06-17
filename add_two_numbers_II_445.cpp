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
    ListNode *reverseLL(ListNode *head){
        ListNode *node = nullptr;
        while(head){
            ListNode *temp = head->next;
            head->next = node;
            node = head;
            head = temp;
        }
        return node;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *t1 = reverseLL(l1);
        ListNode *t2 = reverseLL(l2);
        ListNode *dummy = new ListNode();
        ListNode *curr = dummy;
        int carry = 0;
        while(t1 || t2){
            int sum = carry;
            if(t1) sum += t1->val;
            if(t2) sum += t2->val;
            ListNode *node = new ListNode(sum % 10);
            carry = sum / 10;
            curr->next = node;
            curr = curr->next;
            if(t1) t1 = t1->next;
            if(t2) t2 = t2->next;
        }
        if(carry)
            curr->next = new ListNode(carry);
        
        return reverseLL(dummy->next);
    }
};