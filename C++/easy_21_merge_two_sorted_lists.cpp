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
        ListNode newlist;
        ListNode* end = &newlist;
        while(list1 && list2)
        {
            if(list1->val < list2->val )
            {
                end->next = list1;
                list1 = list1->next;
            }
            else
            {
                end->next = list2;
                list2 = list2->next;
            }
            end = end->next;
        }
        end->next = list1 ? list1 : list2;
        return newlist.next;
    }
};
