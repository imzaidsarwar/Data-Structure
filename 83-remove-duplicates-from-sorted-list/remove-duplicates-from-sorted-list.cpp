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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if (head == nullptr) return head;
        ListNode* currPtr = head;
        while((nullptr != currPtr) && (nullptr != currPtr->next))
        {
            if(currPtr->val == currPtr->next->val)
                currPtr->next = currPtr->next->next;  
            else
                currPtr = currPtr->next;
        }

        return head;
    }
};