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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode *t = head;
        int len = 1;
        
        while( t->next){
            len++;
            t = t->next;
        }

        k = k % len;
        if(k == 0) return head;
        ListNode *tail = t;
        
        t = head;
        for(int i = 1; i < len- k; i++)
            t = t->next;
        
        tail->next = head;
        head = t->next;
        t->next = nullptr;
        return head;

    }
};