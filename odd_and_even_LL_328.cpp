#include <iostream>
#include <vector>
using namespace std;

class Node{
public:    
    int data;
    Node *next;
    
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }  

    Node(int data, Node *next){
        this->data = data;
        this->next = next;
    }
};

void odd_and_even_LL(Node **head){
    vector<int> arr;
    Node *t = *head;
    if(t == nullptr || t->next == nullptr) return;
    while(t != nullptr || t->next != nullptr){
        arr.push_back(t->data);
        t = t->next->next;
    }
    if(t) arr.push_back(t->data);
    
    t = (*head)->next;
    while(t != nullptr || t->next != nullptr){
        arr.push_back(t->data);
        t = t->next->next;
    }
    if(t) arr.push_back(t->data);
    
    int i = 0;
    t = *head;
    while(t){
        t->data = arr[i++];
        t = t->next;
    }
}

Node *convertToLL(vector<int> &arr){
    Node *head = new Node(arr[0]);
    Node *t = head;
    for(int i = 1; i < arr.size(); i++){
        Node *temp = new Node(arr[i]);
        t->next = temp;
        t = t->next;
    }
    return head;
}

void print(Node *head){
    Node *t = head;
    while(t != nullptr){
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}


int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        arr.push_back(ele);
    } 

    Node *head = convertToLL(arr);
    print(head);
 
}