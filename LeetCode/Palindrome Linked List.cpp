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
    bool isPalindrome(ListNode* head) {
        if(head)
        {
            vector<int> helper;
            while(head!=NULL)
            {
                helper.push_back(head->val);
                head=head->next;
            }
                int j=helper.size()-1;
                for(int i=0;i<helper.size();i++)
                {
                    if(helper[i]==helper[j])
                        j--;
                    else
                        return false;
                }

        }
        return true;
    }
};