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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *fast = head;
        ListNode *slow = head;
        // ListNode *prev = slow; // to keep track of the node before slow
        if(fast == nullptr || fast->next == nullptr) return nullptr;
        fast = fast->next->next; // move fast pointer two steps ahead to find the middle node
        
        while(fast && fast->next){
            // prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // prev->next = slow->next;
        ListNode *temp = slow->next;
        slow->next = slow->next->next;
        delete temp;
        return head;
    }
};