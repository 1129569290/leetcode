package LinkedList;

import java.util.List;

public class convertBinaryLinkedListToInteger {
    public int solution_1029(ListNode head){
        int res=0;
        while(head!=null){
            res=res<<1+head.val;
            head=head.next;
        }
        return res;
    }

}
