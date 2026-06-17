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


    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode *first = head;
        ListNode *second = head->next;
        head = second;
        ListNode *prevNode = nullptr;
        while(first && second){
            ListNode *nextNode = second->next;
            second->next = nullptr;
            reverseLL(first);
            if(prevNode){
                prevNode->next = second;
            }

            prevNode = first;
            first = nextNode;
            if(nextNode) second = nextNode->next;
        }
        if(first) prevNode->next = first;
        return head;

    }
};