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
    ListNode* reverseList(ListNode* head) {

        if(head==NULL || head->next == NULL)
            return head;
        ListNode *backw = head;
        ListNode *current = backw->next;
        ListNode *forw = current->next;
        backw->next = NULL;
        while(current->next != NULL)
        {
            current->next = backw;
            backw = current;
            current = forw;
            forw=forw->next;
        }
        current->next = backw;
        head = current;
        return head;
    }
};