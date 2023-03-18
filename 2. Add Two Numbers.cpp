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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       //to store the resultant LL
        ListNode*ans=new ListNode(0);
        ListNode*head=ans;//to keep the track of traversal
        int carry=0;
        //if both l1 && l2 are of same size
        while(l1&&l2){
            int sum=l1->val+l2->val+carry;
             carry=sum/10;//quotient,and as only single digits so carry wont                                     exceed 1
            //insert the sum in the resultant LL by creating a new node at tail
            ans->next=new ListNode(sum%10);
            //update all
            ans=ans->next;
            l1=l1->next;
            l2=l2->next;
        }
        //when uneven lengths
        while(l1){
            int sum=l1->val+carry;
            carry=sum/10;
            ans->next=new ListNode(sum%10);
            ans=ans->next;
            l1=l1->next;
        }
            while(l2){
            int sum=l2->val+carry;
            carry=sum/10;
            ans->next=new ListNode(sum%10);
            ans=ans->next;
            l2=l2->next;
        }
        if(carry) ans->next=new ListNode(carry);
        return head->next;
    }
};