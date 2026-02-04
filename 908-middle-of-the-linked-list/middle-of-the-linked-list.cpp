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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
         ListNode* temp;
         temp = head;
         int cnt = 0;
         while(temp!=NULL){
            temp = temp->next;
            cnt++;
         }
         if(cnt%2==0){
            cnt+=1;
         }

         int cnt2 = 0;
         temp = head;
         while(cnt2!=(cnt/2)){
            temp = temp->next;
            cnt2++;
         }


         return temp;
    }
};