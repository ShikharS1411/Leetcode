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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //create an ans ListNode to store the outputlist1
        ListNode*ans=new ListNode(-1),*current=ans;
        while(list1&&list2){//assuming both are of equal size
            if(list1->val<=list2->val){
                current->next=list1;
                list1=list1->next;
                current=current->next; 
            }
            else{
                current->next=list2;
                list2=list2->next;
                current=current->next;
            }
        }
        //for remaining uneven size cases
        if(list1) current->next=list1;
        if(list2) current->next=list2;
        return ans->next;
    }
};