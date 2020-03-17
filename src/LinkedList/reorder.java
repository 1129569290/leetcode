package LinkedList;
public class reorder {
    public void solution(ListNode head){
        if (head == null) return ;
        ListNode middle = findMiddle(head);
        ListNode secondHalf = reserve(middle);
        ListNode curr = head;
        ListNode alt = secondHalf ;
        while (curr != null) {
            ListNode altNext = alt.next;
            ListNode currNetx = curr.next;
            curr.next = alt;
            alt.next=currNetx;
            curr = currNetx;
            alt = altNext;
        }
    }


    public ListNode reserve(ListNode head){
        ListNode curr = head;
        ListNode prev = null;
        while (curr != null){
            ListNode temp = curr.next;
            curr.next = prev;
            prev = curr ;
            curr = temp ;
        }
        return prev;
    }
    public ListNode findMiddle(ListNode head){
        ListNode fast = head , slow = head;
        while(fast.next!=null&&fast.next.next!=null){
            slow=slow.next;
            fast=fast.next.next;
        }
         return slow;
    }
}
