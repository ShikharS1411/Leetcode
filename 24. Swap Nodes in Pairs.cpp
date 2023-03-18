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
    ListNode* swapPairs(ListNode* head) {
        /*
        brute force approach
        //head is given
        //make prev and current for swapping as we dont have to change head's                 position as it will be used in traversal
        ListNode*current=head,*prev=head;
        while(current && current->next){
            //just reaggranging the links
            prev->next=current->next;
            current->next=current->next->next;
            prev->next->next=current;
            //update both the pointers
            // prev=current;//1
            current=current->next;//3
            prev=prev->next->next;
        }
        return head;
        */
        //edge case
        if(!head||!head->next) return head;
        ListNode*prev=head,*current=head->next;
        //make sure that the one in forward wont hit the null case
        while(current && current->next){
            //swap values
            swap(prev->val,current->val);
            //update pointers as per adjacent case
            prev=prev->next->next;
            current=current->next->next;
        }
        //to deal the last pairs
        if(current) swap(prev->val,current->val);
        return head;
    }
};