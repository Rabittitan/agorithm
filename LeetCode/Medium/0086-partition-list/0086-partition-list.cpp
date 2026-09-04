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
    ListNode* partition(ListNode* head, int x) {
        // Create two dummy nodes to act as the heads of the two partitions
        ListNode before_head(0);
        ListNode after_head(0);
        
        // Pointers to track the current tails of the two partitions
        ListNode* before = &before_head;
        ListNode* after = &after_head;
        
        // Traverse the original linked list
        while (head != nullptr) {
            if (head->val < x) {
                before->next = head;
                before = before->next;
            } else {
                after->next = head;
                after = after->next;
            }
            head = head->next;
        }
        
        // Terminate the 'after' list to prevent cycles
        after->next = nullptr;
        
        // Connect the end of the 'before' list to the start of the 'after' list
        before->next = after_head.next;
        
        // Return the head of the combined partitioned list
        return before_head.next;
    }
};