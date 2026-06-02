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


    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return true;
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *first = head;
        ListNode *second = reverseLL(slow->next);
        while(second){
            if(first->val != second->val) return false;
            first = first->next;
            second = second->next;
        }
        return true;
    }
};


// Another approach using stack

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode *t = head;
        while(t){
            st.push(t->val);
            t = t->next;
        }
        t = head;
        while(t){
            if(t->val != st.top()) return false;
            t = t->next;
            st.pop();
        }
        return true;
    }
};