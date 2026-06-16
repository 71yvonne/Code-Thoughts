class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummyHead = new ListNode;
        dummyHead->next = head;
        ListNode* it = dummyHead;
        while (it->next && it->next->next) {
            ListNode* tmp = it->next;
            it->next = it->next->next;
            tmp->next = tmp->next->next;
            it->next->next = tmp;

            it = it->next->next;
        }

        return dummyHead->next;
    }
};