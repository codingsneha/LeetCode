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
    ListNode *detectCycle(ListNode *head) {
        ListNode *temp = head;
        unordered_map<ListNode*, int> map;
        while (temp) {
            if (map[temp] == 1) return temp;
            map[temp]++;
            temp = temp -> next;
        }
        return NULL;
    }
};