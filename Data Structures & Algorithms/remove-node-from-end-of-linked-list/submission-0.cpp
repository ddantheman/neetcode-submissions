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
        ListNode* it = head;
        int count = 1;
        while (it->next){
            count++;
            it = it->next;
        }
        it = head;
        ListNode* tmp = nullptr;
        for (int i = 0; i < count - n; i++){
            tmp = it;
            it = it->next;
        }
        if (!tmp){
            return head->next;
        }else{
            tmp->next = it->next;
            return head;
        }
    }
};
