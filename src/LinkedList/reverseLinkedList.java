package LinkedList;

public class reverseLinkedList {
    public ListNode solution_92(ListNode head,int m, int n){
        if(head==null)return null;
        ListNode curr=head,prev=null;
        while (m>1){
            prev=curr;
            curr=curr.next;//让curr指向要移动的第m个数
            m--;
            n--;//此时n就是要翻转的节点的个数

        }

        ListNode con = prev,tail=curr;//因为翻转操作借助了prev过后，反转之后的链表的尾c
        ListNode temp =null;
        while(n>0){
            temp=curr.next;
            curr.next=prev;
            prev=curr;
            curr=temp;
            n--;
        }
        if(prev!=null){
            con.next=prev;
        }
        else {
            head=prev;
        }
        tail.next=curr;
        return head;

    }

}
