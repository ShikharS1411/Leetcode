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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==nullptr)return head;
        ListNode*fi=head,*se=head->next;
        while(se!=nullptr){
            int g=__gcd(fi->val,se->val);
            ListNode*node=new ListNode(g);
            fi->next=node;
            node->next=se;
            fi=se;
            se=se->next;
        }
        return head;
    }
};