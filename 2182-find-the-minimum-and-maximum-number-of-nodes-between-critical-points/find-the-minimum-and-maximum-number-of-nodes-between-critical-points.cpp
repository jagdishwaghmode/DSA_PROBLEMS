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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> v;
        ListNode* temp = head;
        while(temp){
            v.push_back(temp->val);
            temp = temp->next;
        }
        vector<int> local;
        int n = v.size();
        if(n<3){
            return {-1,-1};
        }
        for(int i = 1; i<n-1; i++){
            if((v[i-1] < v[i] && v[i] > v[i+1])|| (v[i-1] > v[i] && v[i] < v[i+1]) ){
                local.push_back(i);
            }
        }
        int k =local.size();
        if(k==0)return {-1,-1};
        if(k<2){
            return {-1,-1};
        }
        
        vector<int>ans;
        int minDiff = INT_MAX;
        int maxDiff =  local[k-1]-local[0];
        for(int i = 1; i<k;i++){
            if((local[i]-local[i-1])<minDiff){
                minDiff = local[i]-local[i-1];
            }
        }
        return {minDiff,maxDiff};
    }
};
