/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/

int lengthOfLoop(Node *head) {
    Node *slow = head;
    Node *fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) break;
    }
    
    if(fast == NULL || fast->next == NULL) return 0;

    int len = 1;
    fast = fast->next;
    while(slow != fast){
        len++;
        fast = fast->next;
    }
    return len;
}
