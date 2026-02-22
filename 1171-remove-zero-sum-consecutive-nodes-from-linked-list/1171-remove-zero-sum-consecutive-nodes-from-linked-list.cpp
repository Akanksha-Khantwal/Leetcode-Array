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
    ListNode* removeZeroSumSublists(ListNode* head) {
        int psum=0;
        ListNode*dummy=new ListNode(0);
        unordered_map<int,ListNode*>m;
        dummy->next=head;
        m[0]=dummy;
        
        while(head!=NULL){
            psum+=head->val;
           
            if(m.count(psum)){
                ListNode*temp=m[psum];
                ListNode*start=temp;
                int ps=psum;
                while(temp!=head){
                    temp=temp->next;
                    ps+=temp->val;
                    if(temp!=head){
                        m.erase(ps);
                    }
                }
                start->next=head->next;
            }
            else{
                m[psum]=head;
            }
            head=head->next;
        }
    return dummy->next;    
    }
    
};