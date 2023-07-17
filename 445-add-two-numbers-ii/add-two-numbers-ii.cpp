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
    ListNode * reverse(ListNode* a)
    {
        ListNode * ans=NULL;
        while(a)
        {
            ListNode * temp=a->next;
            a->next = ans;
            ans=a;
            a=temp;
        }
        return ans;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* ans=new ListNode();
        ListNode* temp=ans;
        int carry=0,sum=0;
        l1=reverse(l1);
        l2=reverse(l2);
        while(l1 or l2 or carry)
        {
            sum=0;
            if(l1)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode* t=new ListNode(sum%10);
            temp->next=t;
            temp=temp->next;
        }
        ans=reverse(ans->next);
        return ans;
    }
};