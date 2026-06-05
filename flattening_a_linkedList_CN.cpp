/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */

Node *mergeLL(Node *head1, Node *head2){
	Node *l1 = head1;
	Node *l2 = head2;
	l1->next = nullptr;
	l2->next = nullptr;
	Node *dummy = new Node();
	Node *curr = dummy;
	
	while(l1 && l2){
		if(l1->data <= l2->data){
			curr->child = l1;
			curr = l1;
			l1 = l1->child;
		}
		else{
			curr->child = l2;
			curr = l2;
			l2 = l2->child;
		}
	}

	while(l1){
		curr->child = l1;
		curr = l1;
		l1 = l1->child;
	}

	while(l2){
		curr->child = l2;
		curr = l2;
		l2 = l2->child;
	}

	// curr->child = nullptr;
	return dummy->child;
}


Node* flattenLinkedList(Node* head) 
{
	if(head == nullptr || head->next == nullptr) return head;
	Node *mergedHead = flattenLinkedList(head->next) ;
	return mergeLL(head, mergedHead);
}
