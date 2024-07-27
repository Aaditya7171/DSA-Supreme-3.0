#include<iostream>

class Node
{
public:
    Node* prev;
    int data;
    Node* next;

    Node(int value){
        prev = NULL;
        data = value;
        next = NULL;
    }
};

int getLen(Node* head)
{
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len+=1;
        temp = temp->next;
    }
    return len;
}

void printDLL(Node* head)
{
    Node* temp = head;
    while(temp != NULL) {
        std::cout << temp->data << "-> ";
        temp = temp->next;
    }
    std::cout << "NULL" << "\n";
}

void insertAtHead(Node* &head, Node* &tail, int value)
{
    if(head == NULL && tail == NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(value);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}


void insertAtTail(Node* &head, Node* &tail, int value)
{
    if(head == NULL && tail == NULL)
    {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(value);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int value, int position)
{
    int len = getLen(head);
    if(position == 1){
        insertAtHead(head, tail, value);
    }

    else if(position == len + 1){
        insertAtTail(head, tail, value);  
    }

    else {
        Node* temp = head;
        for(int i = 0; i < position - 2; i++){
            temp = temp->next;
        }
        Node* newNode = new Node(value);
        Node* forward = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = forward;
        forward->prev = newNode;
    }
}

void deleteFromPos(Node* head, Node* tail, int position)
{
    int length = getLen(head);
    //LL is empty
    if(head == NULL && tail == NULL){
        std::cout << "Linked list is empty thus no node to delete.\n";
        return;
    } 
    //single node
    else if(head == tail){
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }
    //head node
    else if(position == 1){
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    //tail node
    else if(position == length){
        Node* temp = tail;
        tail = temp->prev;
        tail->next = NULL;
        temp->prev = NULL;

        delete temp;
    }
    //any other node except head node and tail node
    else {
        Node* backward = head;
        for(int i = 0; i < position - 2; i++){
            backward = backward->next;
        }
        Node* current = backward->next;
        Node* forward = current->next;

        //isolating the node to be deleted(current)
        backward->next = forward;
        forward->prev = backward;
        current->prev = NULL;
        current->next = NULL;

        delete current;
    }
}
  
int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    insertAtTail(head, tail, 111);
    insertAtTail(head, tail, 222);
    insertAtTail(head, tail, 333);
    insertAtPosition(head, tail, 444, 1); 
    insertAtPosition(head, tail, 555, 5); 
    insertAtPosition(head, tail, 666, 3); 
    
    std::cout << "LL before deletion: \n";
    printDLL(head);
    deleteFromPos(head, tail, 6);
    std::cout << "LL after deletion: \n";
    printDLL(head);
  
    return 0;
} 