   if(head == NULL){
            return NULL;
        }
        ListNode* prev = head, *curr = head->next;
        int sum = 0;
        while(curr){
            if(curr->val == 0){
                curr->val = sum;
                sum = 0;
                prev->next = curr;
                prev = curr;
            }
            else{
                sum += curr->val;
            }
            curr = curr->next;
        }
        head = head -> next; 
        return head;