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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
         if(l1==nullptr && l2 == nullptr)
            return l1;
        ListNode* ptr = new ListNode();
        ListNode* ptr2 = ptr;
        while(l1 != nullptr && l2 != nullptr){
            if(l1->val<l2->val){
                ptr->val = l1->val;
                l1 = l1->next;
            }else{
                ptr->val = l2->val;
                l2 = l2->next;
            }
            if(l1 != nullptr || l2 != nullptr){
                ptr->next = new ListNode();
                ptr = ptr->next;   
            }
        }
        if(l1 != nullptr){
            while(l1!= nullptr){
                ptr->val = l1->val;
                l1 = l1->next;
                if(l1 != nullptr){
                    ptr->next = new ListNode();
                    ptr = ptr->next;   
                }
            }
        }
        if(l2 != nullptr){
            while(l2!= nullptr){
                ptr->val = l2->val;
                l2 = l2->next;
                if(l2 != nullptr){
                    ptr->next = new ListNode();
                    ptr = ptr->next;   
                }
            }
        }
        return ptr2;
    }
};
