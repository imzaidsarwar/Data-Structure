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
        
        if(nullptr == head->next)
        {
            head = nullptr;
            return head;
        }
        // Step 1: Create a dummy node before head
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // Step 2: Move fast pointer n+1 steps ahead
        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }

        // Step 3: Move both until fast reaches the end
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Step 4: Remove the target node
        ListNode* toDelete = slow->next;
        slow->next = slow->next->next;
        delete toDelete;

        // Step 5: Return new head
        ListNode* newHead = dummy->next;
        delete dummy; // free dummy node
        return newHead;

    }
};