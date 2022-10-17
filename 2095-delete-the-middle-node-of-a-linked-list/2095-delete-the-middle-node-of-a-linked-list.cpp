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
    ListNode* deleteMiddle(ListNode* head) {
        //find middle node by slow and fast pointers,and then perform delete process
        // edge case
        if(!head||!head->next) return NULL;
        ListNode* fast = head,*slow=head,*prev=NULL;//prev to keep track 
        while(fast&&fast->next){
            prev=slow;
            slow = slow->next;//slow->next will point to middle node
            fast = fast->next->next;
        }
        /* throwing rte -_-
        swap(slow->val,slow->next->val);
        slow->next=slow->next->next;
        */
        prev->next=slow->next;
        return head;
    }
};