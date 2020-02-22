package LinkedList;
class ListNode{
    int val;
    ListNode next;
    ListNode(int x){this.val=x;}
}
public class Rotate {
    public void printLinkedList(ListNode head){
        if(head==null) return;
        while (head!=null){
            System.out.println(head.val);
            head=head.next;
        }
    }
    ListNode solution(ListNode head,int k){
        if(k == 0|| head == null || head.next ==null){
            return head;
        }
        int c = 1;
        ListNode curr = head ;
        ListNode prev = null ;
        while (curr.next !=null ){
            prev = curr;
            curr = curr.next;
            c++;
        }
        if (k % c ==0){
            return head;
        }
        if(k > c) {
            k = k % c;
        }
        prev.next = null;
        curr.next=  head;
        return  solution(curr, k-1);
    }
}
