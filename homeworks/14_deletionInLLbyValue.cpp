#include<iostream>

class Node {
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
        // ll is empty
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else{
        // ll is not empty
        Node* newNode = new Node(value);
        tail->next = newNode;
        tail = newNode;
    }
    return head;
}

void printLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        std::cout << temp->data << "->";
        temp = temp->next;
    }
    std::cout << "NULL";
}

void deleteFromLL(Node* &head, Node* &tail, int value)
{
    //ll empty
    if(head == NULL && tail == NULL){
        std::cout << "No node to delete." << "\n";
        return;
    }

    Node* temp = head;
    Node* prev = NULL;

    // Traverse the list to find the node with the given value
    while(temp != NULL && temp->data != value){
        prev = temp;
        temp = temp->next;
    }
    // If node with given value is found
    if(temp != NULL){
        // If it's the first node
        if(temp == head){
            head = temp->next;
        }
        // If it's the last node
        else if(temp == tail){
            tail = prev;
            tail->next = NULL;
        } 
        // If it's a node in the middle
        else {
            prev->next = temp->next;
        }
        delete temp;
    }
}

bool checkValue(Node* head, int value){
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == value){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int main()
{

    Node* head = NULL;
    Node* tail = NULL;
    head = insertAtTail(10, head, tail);// 10-> NULL
    head = insertAtTail(20, head, tail);// 10-> 20-> NULL
    head = insertAtTail(30, head, tail);// 10-> 20-> 30-> NULL
    head = insertAtTail(25, head, tail);// 10-> 20-> 30-> 25-> NULL
    head = insertAtTail(50, head, tail);// 10-> 20-> 30-> 25-> 50-> NULL
    
    int value = 60;
    if (checkValue(head, value)) {
        deleteFromLL(head, tail, value);
        std::cout << "Value deleted.\n";
    } 
    else {
        std::cout << "Value is not present in LL.\n";
    }    
    
    printLL(head);

    return 0;
}