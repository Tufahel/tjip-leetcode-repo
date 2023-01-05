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
    // TC: O(N), N = size of a list.
    // MC: O(1)
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        auto dummyNode = new ListNode(0, head);
        ListNode* slow = dummyNode;
        ListNode* fast = dummyNode;

        while(fast->next){
            if(n > 0) fast = fast -> next;
            else {
                fast = fast -> next;
                slow = slow -> next;
            }
            n--;
        }
        slow -> next = slow -> next -> next;
        return dummyNode -> next;
    }
};