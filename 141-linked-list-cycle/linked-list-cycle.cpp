/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        /*ListNode* fastPtr = head;
        ListNode* slowPtr = head;

        while(NULL != fastPtr && NULL != fastPtr->next)
        {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
            if(fastPtr == slowPtr)
                return true;
        }
        return false;*/
    
        // using hashset
        unordered_set<ListNode*> visitedNode;
        ListNode* currNode = head;
        while(currNode != NULL)
        {
            if (visitedNode.find(currNode) != visitedNode.end())
                return true;

            visitedNode.insert(currNode);

            currNode = currNode->next;
        }
        return false;
    }
};