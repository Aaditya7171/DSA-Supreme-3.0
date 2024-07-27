#include<iostream>

class Node{
public:
    int data;
    Node* next;

    Node(int value)
    {
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

int getLen(Node* head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len+=1;
        temp = temp->next;
    }
    return len;
}

void deleteFromLL(Node* &head, Node* &tail, int position)
{
    //ll empty
    if(head == NULL && tail == NULL){
        std::cout << "No node to delete." << "\n";
        return;
    }
    //single node
    else if(head == tail){
        Node* temp = head;
        head = NULL;
        tail = NULL; 
        delete temp;
    }
    else {
        //1st node
        if(position == 1){
            Node* temp = head;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }
        else {
            //any other node except the first one
            Node* temp = head;
            for(int i = 0; i < position - 2; i++){
                temp = temp->next;
            }
            Node* nodeToDelete = temp->next;
            temp->next = nodeToDelete->next;
            nodeToDelete->next = NULL;
            delete nodeToDelete;
        } 
    }
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
    
    int position = 4;
    if(position > getLen(head)) std::cout << "Please enter a valid position." << "\n";
    deleteFromLL(head, tail, position);
    printLL(head);

    return 0;
}