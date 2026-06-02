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


// another approach using recursion

int addHelper(Node *temp){
    if(temp == NULL) return 1;
    int carry = addHelper(temp->next);
    temp->data += carry;
    if(temp->data < 10) return 0;
    temp->data = 0;
    return 1;
}


Node *addOne(Node *head)
{
    int carry = addHelper(head);
    if(carry == 1){
        Node *nnode = new Node(1);
        nnode->next = head;
        head = nnode;
    }
    return head;
}

