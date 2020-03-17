package LinkedList;

import sun.awt.geom.AreaOp;


public class addTwoNumbers {
    public ListNode solution(ListNode l1,ListNode l2){
        ListNode head = new ListNode(0);
        ListNode prev = head;
        int carry = 0;
        while (l1!=null||l2!=null){
            int res = 0 ;
            if ( l1!= null ){
                res = l1.val;
                l1 = l1.next;
            }
            if ( l2 != null){
                res += l2.val;
                l2 = l2.next;
            }
            ListNode curr = new ListNode((res+carry)%10);
            carry = (res+ carry)>9 ? 1:0 ;
            prev.next = curr;
            prev = curr;
        }
        if(carry==1){
            ListNode temp = new ListNode(1);
            prev.next = temp;
        }
        return head.next;
    }

}
