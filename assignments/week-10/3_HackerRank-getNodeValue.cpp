int getLen(SinglyLinkedListNode* head){
    int len = 0;
    SinglyLinkedListNode* temp = head;
    while(temp != nullptr){
        len++;
        temp = temp->next;
    }
    return len;
}
void fun(SinglyLinkedListNode* llist, int& positionFromTail, int& ans){
    if(llist == 0) return;
    fun(llist->next, positionFromTail, ans);
    if(positionFromTail == 0){
        ans = llist->data;
    }
    positionFromTail--;  
}
int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    // int pos = getLen(llist) - positionFromTail - 1;
    // for(int i = 0; i < pos; i++){
    //     llist = llist->next;
    // }
    // return llist->data;
    int ans = -1;
    fun(llist, positionFromTail, ans);
    return ans;
}
