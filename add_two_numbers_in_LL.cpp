#include <iostream>
using namespace std;

// Definition of linked list:
class Node {
public:
    int data;
    Node *next;
    Node() {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    Node (int data, Node *next) {
        this->data = data;
        this->next = next;
    }
};

Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node *dummy = new Node();
    Node *curr = dummy;
    Node *t1 = num1;
    Node *t2 = num2;
    int carry = 0;
    while(t1 != NULL || t2 != NULL){
        int sum = carry;
        if(t1) sum += t1->data;
        if(t2) sum += t2->data;
        Node *nnode = new Node(sum % 10);
        carry = sum / 10;
        curr->next = nnode;
        curr = curr->next;
        if(t1) t1 = t1->next;
        if(t2) t2 = t2->next;
    }
    if(carry){
        Node *nnode = new Node(carry);
        curr->next = nnode;
    }
    return dummy->next;
}
