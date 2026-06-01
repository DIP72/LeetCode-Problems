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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast = head;
        ListNode *slow = head;
        for(int i = 0; i < n; i++) fast = fast->next;
        if(fast == nullptr){
            ListNode *temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        while(fast->next){
            fast = fast->next;
            slow = slow->next;
        }
        ListNode *delNode = slow->next;
        slow->next = slow->next->next;
        delete delNode;
        return head;
    }


    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *t = head;
        int len = 0;
        while(t){
            len++;
            t = t->next;
        }
        if(n == len){
            t = head;
            head = head->next;
            delete t;
            return head;
        }

        t = head;
        int diff = len - n;
        if(diff < 0) return head;
        for(int i = 1; i < diff; i++) t = t->next;
        ListNode *deleteNode = t->next;
        t->next = t->next->next;
        delete deleteNode;
        return head;
    }
};