/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val; //copies the next node's value to given node

        ListNode* temp=node->next; //stores the next node in temp
        node->next=node->next->next; 
        delete temp;
    }
};