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
    void insertAtTail(Node* &toMove, Node* &head, Node* &tail){
        if(head == NULL && tail == NULL){
            head = toMove;
            tail = toMove;
        }
        else{
             tail->next = toMove;
             tail = toMove;
        }
    }
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node* zeroHead = NULL;
        Node* zeroTail = NULL;
        
        Node* oneHead = NULL;
        Node* oneTail = NULL;
        
        Node* twoHead = NULL;
        Node* twoTail = NULL;
        
        Node* temp = head;
        while(temp != NULL){
            Node* toMove = temp;
            temp = temp->next;
            toMove->next = NULL;
            
            if(toMove->data == 0){
                insertAtTail(toMove, zeroHead, zeroTail);
            }
            else if(toMove->data == 1){
                insertAtTail(toMove, oneHead, oneTail);
            }
            else if(toMove->data == 2){
                insertAtTail(toMove, twoHead, twoTail);
            }
        }
        if(zeroHead != NULL){
            if(oneHead != NULL){
                zeroTail->next = oneHead;
                oneTail->next = twoHead;
            }
            else{
                zeroTail->next = twoHead;
            }
            return zeroHead;
        }
        else{
            if(oneHead != NULL){
                oneTail->next = twoHead;
                return oneHead;
            }
            else{
                return twoHead;
            }
        }
    }
};