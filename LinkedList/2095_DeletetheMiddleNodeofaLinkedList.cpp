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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int count=0;
        if(temp->next==NULL)
        return NULL;
        while(temp)
        {
            temp=temp->next;
            count++;
        }
        temp=head;
        int i=0;
        while(temp)
        {
            i++;
            if(i==count/2)
            {
                temp->next=temp->next->next;
                break;
            }
            else
            temp=temp->next;
        }
        temp=head;
        return temp;
    }
};