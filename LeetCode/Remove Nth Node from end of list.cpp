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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode answer;
        ListNode* answer_p=&answer;
        int elements=elements_listnode(head);
        for(int i=0;i<elements;i++)
        {
            if(i==elements-n)
            {
                answer_p->next=head->next;
                answer_p=answer_p->next;
                break;
            }
            answer_p->next=head;
            head=head->next;
            answer_p=answer_p->next;
        }
        return answer.next;
    }
    
private:
    int elements_listnode(ListNode* head)
    {
        int elements=0;
        while(head!=NULL)
        {
            elements++;
            head=head->next;
        }
        return elements;
    }
};