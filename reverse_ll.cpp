class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *temp = head;
         ListNode *prev = NULL;
         ListNode *front;
        while(temp!=NULL){
            front = temp -> next;
            temp->next =prev;
            prev = temp;
            temp = front; 
        }
          
      

        return prev;
    }
};
