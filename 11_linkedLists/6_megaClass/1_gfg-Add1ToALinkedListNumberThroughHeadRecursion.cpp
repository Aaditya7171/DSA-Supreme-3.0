#include<iostream>

struct Node{
    int data;
    Node* next;
    Node() : data(0), next(NULL){}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node *next) : data(x), next(next) {}
};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        std::cout << temp->data << "-> ";
        temp = temp->next;
    }
    std::cout << "NULL";
}


void solve(Node* head, int &carry){
    if(!head) return;
    solve(head->next, carry);

    //1 case
    int sum = head->data + carry;
    int digit = sum % 10;
    carry = sum / 10;
    head->data = digit;
}

Node* addOne(Node* head, int &carry){
    solve(head, carry);
    if(carry){
        Node* newHead = new Node(carry);
        newHead->next = head;
        head = newHead;
    }
    return head;
}

int main(){
    Node* head = new Node(9);
    head->next = new Node(9);
    head->next->next = new Node(9);
    
    int carry = 1;
    head = addOne(head, carry);
    print(head);

    return 0;
}