// Bruteforce Approach
#include<iostream>
#include<cmath>

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

void print(Node* head){
    while(head != NULL) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout<<"\n";
   
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

int findMiddleOfLL(Node* &head) {
    int len = getLen(head);
    int div = len / 2;
    
    for(int i = 0; i < div; i++){
        head = head-> next;
    }
    return head->data;

}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    
    insertAtPosition(head, tail, 10, 1);
    insertAtPosition(head, tail, 20, 2);
    insertAtPosition(head, tail, 0, 3);
    insertAtPosition(head, tail, 20, 4);
    insertAtPosition(head, tail, 59, 5);
    
    print(head);
    int ans = findMiddleOfLL(head);
    
    std::cout << ans;

    return 0;
}