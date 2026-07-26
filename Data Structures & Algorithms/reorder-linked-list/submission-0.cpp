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
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        //slow marks mid point, reverse second half
        ListNode* first = head;
        ListNode* second = slow->next;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        slow->next = nullptr;
        while (second){
            next = second->next;
            second->next = prev;
            prev = second;
            second = next;
        }
        second = prev;
        //combine first and second, alternating
        ListNode* firstTemp = nullptr;
        ListNode* secondTemp = nullptr;
        while (second){
            firstTemp = first->next;
            secondTemp = second->next;
            first->next = second;
            second->next = firstTemp;
            first = firstTemp;
            second = secondTemp;
        }
    }
};
