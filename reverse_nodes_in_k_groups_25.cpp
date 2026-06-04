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

    ListNode *getKthNode(ListNode *head, int k){
        ListNode *t = head;
        for(int i = 1; i < k && t; i++)
            t = t->next;
        return t;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode *temp = head;
        ListNode *prevLast = nullptr;
        while(temp){
            ListNode *kthNode = getKthNode(temp, k);
            if(kthNode == nullptr){
                if(prevLast) prevLast->next = temp;
                break;
            }

            ListNode *nextNode = kthNode->next;
            kthNode->next = nullptr;
            reverseLL(temp);

            if(temp == head)
                head = kthNode;
            else
                prevLast->next = kthNode;

            prevLast = temp;
            temp = nextNode;
        }

        return head; 
    }
};