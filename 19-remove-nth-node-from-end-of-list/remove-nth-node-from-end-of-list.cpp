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
        ListNode* temp = head;
        ListNode* temp2 = head;
        int cnt = 0;
        while(temp!=NULL){
            cnt++;
            temp = temp->next;
        }

        int pos = cnt - n - 1;

        if (n == cnt) {
            return head->next;
        }

    
        for(int i  = 0; i<pos; i++){
            temp2 = temp2->next;
        }

        temp2->next = temp2->next->next;

        return head;
    }
};