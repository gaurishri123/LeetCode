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
    ListNode* newLastNode(ListNode* head, int n){
        n--;
        ListNode* temp=head;
        while(temp!=NULL && n>0){
            n--;
            temp=temp->next;
        }
        return temp;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0) return head;
        int length=1;
        ListNode* tail=head;
        while(tail->next!=NULL){
            length++;
            tail=tail->next;
        }
        if(k%length==0) return head;
        k=k%length;
        tail->next=head;
        ListNode* newLastnode=newLastNode(head, length-k);
        head=newLastnode->next;
        newLastnode->next=NULL;
        return head;
    }
};