package LinkedList;

public class removeNthFromEnd {
    public ListNode solution_19 (ListNode head, int k){
        if(head == null || k<0) return null;
        int count = 0 ;
        ListNode fro=head,beh=head;
        while(count<k){
            fro = fro.next;
            count++;
        }
        if(fro == null){
            head = head.next;
            return head;
        }
        while(fro.next!=null){
            beh=beh.next;
            fro= fro.next;
        }
        beh.next=beh.next.next;
        return head;
    }
}
