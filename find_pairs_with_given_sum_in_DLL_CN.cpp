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
 *          this -> data = data;
 *          this -> prev = prev;
 *          this -> next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *findTail(Node *head){
    Node *temp = head;
    while(temp && temp->next) temp = temp->next;
    return temp;
        
}

vector<pair<int, int>> findPairs(Node* head, int k)
{
    vector<pair<int, int>> ans;
    if(head == NULL) return ans;
    Node *left = head;
    Node *right = findTail(head);
    while(left->data < right->data){
        int sum = left->data + right->data;
        if(sum == k) {
            ans.push_back({left->data, right->data});
            left = left->next;
            right = right->prev;
        }
        else if(sum < k) left = left->next;
        else right = right->prev;
    }
    return ans;
}
