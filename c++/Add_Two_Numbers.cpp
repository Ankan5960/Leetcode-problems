//problem Link:-https://leetcode.com/problems/add-two-numbers/description/

#include <iostream>
using namespace std;

struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode *l1temp, *l2temp;
        ListNode* resListNode = new ListNode();
        ListNode* tempResListNode = resListNode;
        l1temp = l1;
        l2temp = l2;
        int carry = 0;

        while(l1temp || l2temp || carry)
        {
            int val1 = 0;
            int val2 = 0;
            ListNode* next1 = nullptr;
            ListNode* next2 = nullptr;

            if(l1temp)
            {
                val1 = l1temp->val;
                next1 = l1temp->next;
            } 
            if(l2temp)
            {
                val2 = l2temp->val;
                next2 = l2temp->next;
            } 

            int tempVal = (val1 + val2 + carry)%10;
            carry = (val1 + val2 + carry)/10;

            tempResListNode->val = tempVal;

            if(next1 || next2 || carry)
            {
                tempResListNode->next = new ListNode();
                tempResListNode = tempResListNode->next;
            }
            if(l1temp) l1temp = l1temp->next;
            if(l2temp) l2temp = l2temp->next;
        }
        return resListNode;
    }
};

int main()
{
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    Solution s;
    ListNode* res = s.addTwoNumbers(l1, l2);

    while(res)
    {
        cout << res->val << endl;
        res = res->next;
    }
}
