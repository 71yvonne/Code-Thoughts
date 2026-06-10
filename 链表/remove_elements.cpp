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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummyHead = new ListNode();
        dummyHead->next = head;
        ListNode* prev = dummyHead;
        while (prev->next != nullptr) {
            if (prev->next->val == val) {
                ListNode* tmp = prev->next;
                prev->next = tmp->next;
                delete tmp;
            } else
                prev = prev->next;
        }

        return dummyHead->next;
    }
};