#include<iostream>

class Solution {
  public:
  
    Node* reverseLL(Node* &head){
        Node* prev = NULL;
        Node* curr= head;
        while(curr != NULL){
            Node* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    Node* addOne(Node* head) {
        // Your Code here
        // return head of list after adding one
        //step 1: reverse list
        head = reverseLL(head);
        //step 2: add 1
        int carry = 1;
        Node* temp = head;
        while(temp != NULL){
            int sum = temp->data + carry;
            int digit = sum % 10;
            carry = sum / 10; 
            temp->data = digit;
            if(temp->next == NULL && carry != 0){
                Node* newNode = new Node(carry);
                temp->next = newNode;
                temp = newNode;
            }
            temp = temp->next;
        }
        //step 3: reverse list;
        head = reverseLL(head);
        return head;
    }
};

struct Node{
    int data;
    Node* next;
    Node() : data(0), next(NULL){}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node *next) : data(x), next(next) {}
};

//Linked list to integer 
int linkedListToInteger(Node* head){
    Node* temp = head;
    int num = 0;
    while(temp != NULL){
        int val = temp->data;
        int digitCount = 0;
        int tempVal = val;
        if(tempVal == 0) digitCount = 1;
        else{
            while(tempVal > 0){
                digitCount+=1;
                tempVal /= 10;
            }
        }
        int pow = 1;
        for(int i = 0; i < digitCount; i++){
            pow *= 10;
        }
        num = num * pow+ val;
        temp = temp->next;
    }
    return num;
}

int linkedListToIntegerAp2(Node* head) {
    Node* temp = head;
    std::string resultStr;

    while (temp != NULL) {
        resultStr += std::to_string(temp->data); // Append node's data as string
        temp = temp->next;
    }
        
    // Convert the concatenated string to an integer
    return std::stoi(resultStr);
}