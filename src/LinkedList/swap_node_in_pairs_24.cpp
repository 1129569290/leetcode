class Solution {
public:
    ListNode* reverse(ListNode* l){
        ListNode *pre=NULL,*cur=l;
        int n=2;
        while(n){
            ListNode *temp=cur->next;
            cur->next=pre;
            pre=cur;
            cur=temp;
            n--;
        }
        return pre;
    }
    ListNode* swapPairs(ListNode* head) {
        if(!head||!head->next)return head;
        ListNode *cur=head->next->next;
        ListNode *new_head=reverse(head);
        ListNode *tail=new_head->next;
        while(cur&&cur->next){
            ListNode *temp=cur->next->next;
            tail->next=reverse(cur);
            tail=cur;
            cur=temp;
        }
        if(cur)tail->next=cur;
        return new_head;
    }

};