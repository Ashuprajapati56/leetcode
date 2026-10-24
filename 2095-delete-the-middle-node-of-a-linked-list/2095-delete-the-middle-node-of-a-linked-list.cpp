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
    //     ListNode*s=head;
    //     ListNode*f=head;

    //     if (f->next->next==NULL){
    //         s->next=NULL;
    //         return head;
    //    }

    //     while( f!=NULL && f->next!=NULL){
    //         s=s->next;
    //         f=f->next->next;
    //     }
    //     s->next=s->next->next;
    //     return head;
      ListNode*s=head;
      int len=0;
      while(s!=NULL){
        len++;
        s=s->next;

      }
      if(len==1) return head=head->next;

      int idx=len/2;

         ListNode*f=head;

      for(int i=1;i<idx;i++){
        f=f->next;
      }
      f->next=f->next->next;
      return head;
    
        
    }
};