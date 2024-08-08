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

//returns head of the new ll after insertion
Node* insertAtHead(int value, Node* &head, Node* &tail){
    // case where linkedlist is empty(both head and tail points to Null)
    //step 1-> create a new node
    if(head == NULL && tail == NULL){
        //step 1-> create a new node
        Node* newNode = new Node(value);
        //step 2-> point head to the node
        head = newNode;
        //step 3-> point tail to newNode
        tail = newNode;
    }
    else{
        //ll isn't empty
        //step 1: create node
        Node* newNode = new Node(value);
        //step 2: connect this newNode to head node
        newNode->next = head;
        //step 3: update head
        head = newNode;

    }
    return head;
}

//returns head of the updated list
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

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        std::cout << temp->data << "-> ";
        temp = temp->next;
    }
    std::cout << "NULL" << "\n";
}

int getLength(Node* head) {
    int len = 0;
    Node* temp = head;

    while(temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPosition(int position, int value, Node* &head, Node* &tail) {
    //assuming-> we'll get valid positions input
    int length = getLength(head);
    if(position == 1){
        head = insertAtHead(value, head, tail);
    }
    else if(position == length+1){
        head = insertAtTail(value, head, tail);
    }
    else {
        Node* temp = head;
        for(int i = 0; i < position - 2; i++){
            temp = temp->next;
        }
        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

int main()
{

    Node* head = NULL;
    Node* tail = NULL;
    //ll is empty
    head = insertAtHead(10, head, tail); //10 -> NULL
    print(head);
    head = insertAtHead(20, head, tail); //20-> 10-> NULL
    print(head);
    head = insertAtHead(30, head, tail); //30-> 20-> 10-> NULL
    print(head);

    // Node* head = NULL;
    // Node* tail = NULL;
    // head = insertAtTail(101, head, tail);// 101-> NULL
    // // print(head);
    // head = insertAtTail(102, head, tail);// 101-> 102-> NULL
    // // print(head);
    // head = insertAtTail(103, head, tail);// 101-> 102-> 103-> NULL
    // // print(head);
    // insertAtPosition(1, 55, head, tail);// 55-> 101-> 102-> 103-> NULL
    // print(head);
    // insertAtPosition(5, 60, head, tail);// 55-> 101-> 102-> 103-> 60-> NULL
    // print(head);
    // insertAtPosition(3, 65, head, tail);// 55-> 101-> 65-> 102-> 103-> 60-> NULL
    // print(head);

    // // stack memory
    // Node first;
    // // Dynamic Memory
    // Node* first = new Node();
    // //constructor
    // Node(int value)
    // {
    //     this->data = value;
    //     this->next = NULL;
    // }

    return 0;
}