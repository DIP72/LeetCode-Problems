/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *reverseLL(Node *head){
    Node *node = NULL;
    while(head){
        Node *temp = head->next;
        head->next = node;
        node = head;
        head = temp;
    }
    return node;
}


Node *addOne(Node *head)
{
    Node *newHead = reverseLL(head);
    Node *t = newHead;
    int carry = 1;
    Node *prev = t;
    while(t && carry){
        int sum = carry + t->data;
        t->data = sum % 10;
        carry = sum / 10;
        prev = t;
        t = t->next;
    }
    if(carry)
        prev->next = new Node(carry);
        
    return reverseLL(newHead);
}
