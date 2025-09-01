 void linkdeleteHelp(Node* &head, int n, int m) {
        // code here
        if(!head) return;
        Node* it = head;
        for(int i = 0; i < m - 1; i++){
            if(!it) return;
            it = it->next;
        }
        if(!it) return;
        
        Node* MthNode = it;
        it = MthNode->next;
        for(int i = 0; i < n; i++){
            if(!it) break;
            Node* temp = it -> next;
            delete it;
            it = temp;
        }
        MthNode-> next = it;
        linkdeleteHelp(it, n, m);
    }
class Solution {
  public:
    Node* linkdelete(Node* head, int n, int m) {
        // code here
        linkdeleteHelp(head, n, m);
        return head;
    }    
};