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

    ListNode *getMiddleNode(ListNode *head){
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    int pairSum(ListNode* head) {
        if(head == nullptr) return 0;
        int maxx = INT_MIN;
        ListNode *middle = getMiddleNode(head);
        ListNode *reversedHead = reverseLL(middle);
        ListNode *t1 = head;
        ListNode *t2 = reversedHead;
        while(t1  && t2){
            int sum = t1->val + t2->val;
            maxx = max(maxx, sum);
            t1 = t1->next;
            t2 = t2->next;
        }
        return maxx;
    }
};