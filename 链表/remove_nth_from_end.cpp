class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummyHead = new ListNode(0, head);
        ListNode *fast = dummyHead, *slow = dummyHead;
        for (int i = 0; i < n; i++)
            fast = fast->next;
        while (fast->next) {
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* tmp = slow->next;
        slow->next = tmp->next;
        delete tmp;

        return dummyHead->next;
    }
};