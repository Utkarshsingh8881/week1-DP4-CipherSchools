class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // Iterative;
        if(head == NULL || head -> next == NULL) return head;
        ListNode* past = NULL;
        ListNode* present = head;
        ListNode* future = head -> next;
        while(future != NULL) {
            present -> next = past;
            past = present;
            present = future;
            future = future -> next;
        }
        present -> next = past;
        return present;
    }
};
