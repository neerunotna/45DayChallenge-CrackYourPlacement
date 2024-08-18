/**  Leetcode-206
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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)return head;
        ListNode *temp=NULL;
        ListNode* prev=NULL;
        while(head->next!=NULL){
            temp=head;
            head=head->next;
            temp->next=prev;
            prev=temp;
        }
        head->next=prev;
        return head;
    }
};