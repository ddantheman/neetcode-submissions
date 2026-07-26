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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* it = new ListNode();
        if (list1 != nullptr && list2 != nullptr){
            if (list1->val < list2->val){
                it->val = list1->val;
                it->next = mergeTwoLists(list1->next, list2);
            }else{
                it->val = list2->val;
                it->next = mergeTwoLists(list1, list2->next);
            }
        }else if (list1 == nullptr && list2 != nullptr){
            it->val = list2->val;
            it->next = list2->next;
        }else if (list1 != nullptr && list2 == nullptr){
            it->val = list1->val;
            it->next = list1->next;
        }else{
            return nullptr;
        }
        return it;
    }
};
