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

//same as SLL
int searchInDLL(Node* head, int target){
    int position = 1;
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == target){
            return position;
        }
        temp = temp->next;
        position+=1;
    }
    return -1;
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
    printDLL(head);

    std::cout << "Element found at position: "<< searchInDLL(head, 666);
  
    return 0;
}