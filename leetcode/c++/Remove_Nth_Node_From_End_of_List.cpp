//problem link:- https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

#include<iostream>

struct ListNode {
    ListNode *next;
    int val;
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int Length(ListNode* head){
        int count=0;
        ListNode* temphead=head;
        while(temphead){
            count++;
            temphead=temphead->next;
        }
        return count;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len= Length(head);
        int terget = len-n+1;
        ListNode* prev=nullptr;
        ListNode* temphead=head;
        for(int i=1;i<terget;i++){
            prev=temphead;
            temphead=temphead->next;
        }
        if(!prev){
            head=head->next;
            return head;
        }
        else
        {
            prev->next=prev->next->next;
            return head;
        }
    }

    void display(ListNode* head){
        ListNode* temp=head;
        while(temp){
            std::cout<<temp->val<<std::endl;
            temp=temp->next;
        }
    }
};

int main()
{
    
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
    Solution sol;
    sol.removeNthFromEnd(head,2);
    sol.display(head);
}