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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* lista = headA;
        ListNode* listb = headB;

        while (lista != listb) {
            lista = (lista != nullptr) ? lista->next : headB;
            listb = (listb != nullptr) ? listb->next : headA;
        }
    }    


    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *t1 = headA;
        ListNode *t2 = headB;
        int len1 = 0, len2 = 0;
        while(t1){
            len1++;
            t1 = t1->next;
        }
        while(t2){
            len2++;
            t2 = t2->next;
        }
        
        // assigning longest ll to t1
        if(len1 > len2){
            t1 = headA;
            t2 = headB;
        } else {
            t1 = headB;
            t2 = headA;
        }

        int diff = abs(len1 - len2);
        for(int i = 0; i < diff; i++)
            t1 = t1->next;

        while(t1 != NULL && t2 != NULL){
            if(t1 == t2) return t1;
            t1 = t1->next;
            t2 = t2->next;
        }
        return NULL;
    }
};