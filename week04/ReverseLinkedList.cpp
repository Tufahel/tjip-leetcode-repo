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
        auto currentNode = head;
        ListNode* previous = NULL;
        while(currentNode){
            auto nxt = currentNode -> next;
            currentNode -> next = previous;
            previous = currentNode;
            currentNode = nxt;
        }
        return previous;
    }
};
