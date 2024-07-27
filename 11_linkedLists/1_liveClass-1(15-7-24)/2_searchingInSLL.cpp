#include<iostream>

class Node 
{
    public:
        int data;
        Node* next;

    Node(int value) {
        this->data = value;
        this->next = NULL;
    }
};

Node* insertAtTail(int value, Node* &head, Node* &tail) {
    if(head == NULL && tail == NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(value);
        tail->next = newNode;
        tail = newNode;
    }
    return head;
}

bool searchLinkedList(Node* head, int target) {
    Node* temp = head;
    while(temp != NULL) {
        if(temp->data == target){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;
    head = insertAtTail(10, head, tail);// 10-> NULL
    head = insertAtTail(20, head, tail);// 10-> 20-> NULL
    head = insertAtTail(30, head, tail);// 10-> 20-> 30-> NULL
    head = insertAtTail(25, head, tail);// 10-> 20-> 30-> 25-> NULL
    head = insertAtTail(50, head, tail);// 10-> 20-> 30-> 25-> 50-> NULL

    std::cout << searchLinkedList(head, 21);

    return 0; 
}