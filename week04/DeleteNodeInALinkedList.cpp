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
    // TC: O(N), N = size of a list.
    // MC: O(1)
    void deleteNode(ListNode* deleteNode) {
        auto nxt = deleteNode -> next;
        deleteNode -> val = deleteNode -> next -> val;
        deleteNode -> next = deleteNode -> next -> next;
        // *(deleteNode) = *(deleteNode -> next);
        delete(nxt);
    }
};
