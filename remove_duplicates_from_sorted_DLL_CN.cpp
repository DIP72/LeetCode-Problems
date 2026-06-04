/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node* removeDuplicates(Node* head)
{
    Node* curr = head;

    while(curr && curr->next)
    {
        if(curr->data == curr->next->data)
        {
            Node* dup = curr->next;

            curr->next = dup->next;

            if(dup->next)
                dup->next->prev = curr;

            delete dup;
        }
        else
        {
            curr = curr->next;
        }
    }

    return head;
}
