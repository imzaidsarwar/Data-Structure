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

        /*if(NULL == list1)
            return list2;
        
        if(NULL == list2)
            return list1;

        ListNode* tempNode = list1;
        
        if(list1 < list2)
            list1 = list1->next;
            
        else
        {
            tempNode = list2;
            list2 = list2->next;
        }

        ListNode* currNode = tempNode;

        while(NULL != list1 && NULL != list2)
        {
            if(list1 <= list2)
            {
                currNode->next = list1;
                list1 = list1->next;
            }

            else
            {
                currNode->next = list2;
                list2 = list2->next;
            }

            currNode = currNode->next;
        }

        if(NULL != list1)
            currNode->next = list1;
        else
            currNode->next = list2;

        return tempNode;*/
        // Dummy node to simplify edge cases
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (list1 && list2) {
            if (list1->val < list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        // Attach the remaining nodes
        tail->next = list1 ? list1 : list2;

        return dummy.next;

    
    }
};