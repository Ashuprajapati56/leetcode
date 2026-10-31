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
    ListNode* rotateRight(ListNode* head, int k) {

         if(head==NULL||head->next==NULL ) return head;

           ListNode*t=head;

           ListNode*tail=NULL;

            int cnt=1;
        while(t->next!=NULL){
            t=t->next;
            cnt++;
        }  


        tail=t;
       

        k=k%cnt;
        if(k==0) return head;

        t=head;

        for(int i=1;i<cnt-k;i++){
            t=t->next;

        }
        tail->next=head;
        head=t->next;
        t->next=NULL;

        return head;
    }
};