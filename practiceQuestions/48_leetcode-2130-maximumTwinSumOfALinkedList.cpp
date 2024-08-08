#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:

int getLen(ListNode* head)
{
    int len = 0;
    ListNode* temp = head;
    while(temp != NULL){
        len+=1;
        temp = temp->next;
    }
    return len;
}

int* llToArr(ListNode* head, int size){
    int* arr = new int[size];

	ListNode* temp = head;
	int index = 0;
	while(temp != NULL){
		arr[index] = temp->val;
		temp = temp->next;
		index++;
	}
	return arr;
}

    int pairSum(ListNode* head) {
    
        int size = getLen(head);
        int* arr = llToArr(head, size);

        int maxSum = 0;
        for(int i = 0; i < size / 2; i++){
            maxSum = max(maxSum, arr[i] + arr[size - i - 1]);
        }
        // delete arr;
        return maxSum;
    }
};