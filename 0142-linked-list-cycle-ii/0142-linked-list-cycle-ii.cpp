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
    ListNode *detectCycle(ListNode *head) {
        ListNode*s=head;
        ListNode*f=head;



        // Step 1: Detect whether a cycle exists
        while (f != NULL && f->next != NULL) {
            s = s->next;
            f = f->next->next;

            if (s == f) {
                // Step 2: Find the starting node of the cycle
                ListNode* t = head;

                while (t != s) {
                    t = t->next;
                    s = s->next;
                }

                return t;
            }
        }

        return NULL;
    }
};

