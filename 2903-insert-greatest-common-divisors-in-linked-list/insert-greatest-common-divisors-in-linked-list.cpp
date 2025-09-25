/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int gcd_my(int num1,int num2){
        while(num2 != 0){
            int temp = num2;
            num2 = num1 % num2;
            num1 = temp;
        }
        return num1;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next == NULL){
            return head;
        }

        ListNode* curr = head;
        while(curr != nullptr && curr->next != nullptr){
            int val = gcd_my(curr->val,curr->next->val);
            ListNode* newNode = new ListNode(val);

            newNode->next = curr->next;
            curr->next = newNode;

            curr = newNode->next;
        }
    return head;
    }
};