/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
        // ListNode *t = node;
        // ListNode *prev = t;
        // while(t->next != NULL){
        //     prev = t;
        //     t->val = t->next->val;
        //     t = t->next;
        // }
        // delete t;
        // prev->next = NULL;
    }
};