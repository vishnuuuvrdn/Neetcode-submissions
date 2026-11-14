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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode();
        dummy->next = head;
        int len = 0;
        ListNode* temp = dummy;
        while(temp){
            len++;
            temp = temp->next;
        }

        n = len - n;

        ListNode* curr = dummy;
        while(curr){
            if(n == 1){
                curr->next = curr->next->next;
                break;
            }
            n--;
            curr = curr->next;
        }

        return dummy->next;
    }
};
