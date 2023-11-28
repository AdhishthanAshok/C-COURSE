class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev = head ;
        ListNode* curr =head ;
 curr  = curr -> next ;
        if(head->val = val){
            head = curr;
            head->next = NULL;
            return curr;
        }
        while(curr ){
            prev = prev -> next;
            curr = curr -> next;
           if(curr->val == val){
              prev->next = curr->next;
              curr->next = NULL;
           }
        }
        return head;
    }
};