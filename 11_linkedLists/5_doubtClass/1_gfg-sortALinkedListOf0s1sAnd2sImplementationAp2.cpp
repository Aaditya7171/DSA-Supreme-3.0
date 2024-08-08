#include<iostream>

struct Node{
    int data;
    Node* next;
    Node() : data(0), next(NULL){}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node *next) : data(x), next(next) {}
};

class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node* zeroHead = new Node(-1);
        Node* zeroTail = zeroHead;

        Node* oneHead = new Node(-1);
        Node* oneTail = oneHead;

        Node* twoHead = new Node(-1);
        Node* twoTail = twoHead;

        Node* temp = head;
        while(temp != NULL){
            if(temp->data == 0){
                zeroTail->next = temp;
                zeroTail = zeroTail->next;
            }
            else if(temp->data == 1){
                oneTail->next = temp;
                oneTail = oneTail->next;
            }
            else if(temp->data == 1){
                twoTail->next = temp;
                twoTail = twoTail->next;
            }
            temp = temp->next;
        }
        if(oneHead->next != NULL)
            zeroTail->next = oneHead->next;
        else
            zeroTail->next = twoHead->next;
        
        oneTail->next = twoHead->next;
        twoTail->next = NULL;

        head = zeroHead->next;

        delete zeroHead;
        delete oneHead;
        delete twoHead;

        return head;
    }
};