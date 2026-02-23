/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public boolean isPalindrome(ListNode head) {
        ListNode ptr = head;
        ArrayList<Integer> al = new ArrayList<>();

        while(ptr != null){
            al.add(ptr.val);
            ptr = ptr.next;
        }
        int i = 0;
        int j = al.size() - 1;

        while(i < j){
            if(al.get(i) != al.get(j)){
                return false;
            }
            i++;
            j--;
        }
    return true;
    }
}