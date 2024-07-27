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

void printReverseDLL(Node* tail) {
    Node* temp = tail;
    while(temp != NULL) {
        std::cout << temp->data << "-> ";
        temp = temp->prev;
    }
    std::cout << "NULL\n" ;
}

void insertAtHead(Node* &head, Node* &tail, int value)
{
    //case 1: LL is empty
    if(head == NULL && tail == NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    //LL is not empty
    else{
        Node* newNode = new Node(value);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int value)
{
    //case 1: LL is empty
    if(head == NULL && tail == NULL)
    {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    //case 2: LL is non empty
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
    //case 1: insert at leftmost end
    if(position == 1){
        insertAtHead(head, tail, value);
    }

    //case 2: insert at righmost end
    else if(position == len + 1){
        insertAtTail(head, tail, value);  
    }

    //case 3: insert in-between
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

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    // insertAtHead(head, tail, 10);// 10-> NULL
    // insertAtHead(head, tail, 20);// 20-> 10-> NULL
    // insertAtHead(head, tail, 30);// 30-> 20-> 10-> NULL
    // printDLL(head); // 30-> 20-> 10-> NULL
    // printReverseDLL(tail);// 10-> 20-> 30-> NULL

    insertAtTail(head, tail, 111);// 111-> NULL
    // printDLL(head);
    insertAtTail(head, tail, 222);// 111-> 222-> NULL 
    // printDLL(head);
    insertAtTail(head, tail, 333);// 111-> 222-> 333-> NULL
    // printDLL(head);

    insertAtPosition(head, tail, 444, 1);// 444-> 111-> 222-> 333-> NULL
    printDLL(head);
    insertAtPosition(head, tail, 555, 5);// 444-> 111-> 222-> 333-> 555-> NULL
    printDLL(head);
    insertAtPosition(head, tail, 666, 3);// 444-> 111-> 666-> 222-> 333-> 555-> NULL
    printDLL(head);
  
    return 0;
}