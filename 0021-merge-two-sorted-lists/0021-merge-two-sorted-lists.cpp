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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        if(list1 == nullptr && list2 == nullptr) return nullptr; //if both lists are empty return null
        
        if(list1 == nullptr) return list2; //if list1 is empty return the list2 as output
        if(list2 == nullptr) return list1; //if list2 is empty return the list1 as output
        
        ListNode *headNode = nullptr; //initializing the head node with null value
        
        if(list1->val > list2->val) //comparing values in both lists
        {
            headNode = list2;   // list2 first node will be asssigned to head if above condition stands true
            list2=list2->next; //traversing to next node in list2
        }
        else
        {
            headNode = list1;  // list1 first node will be asssigned to head if above condition stands false
            list1=list1->next; //traversing to next node in list1
        }
        
        ListNode *currentNode = headNode; //assigning head to the current node for rest of the list
        while(list1 != nullptr && list2 != nullptr)
        {
            if(list1->val > list2->val) 
            {
                currentNode->next = list2;//next node of current node will be list2 node if above condition stands true
                list2 = list2->next; //traversing to next node
            }
            else
            {
                currentNode->next = list1;//next node of current node will be list1 node if above condition stands false
                list1 = list1->next; //traversing to next node
            }
            currentNode = currentNode->next; //currentNode pointer will move to next node
        }
        if(list1 == nullptr)
        {
            currentNode->next = list2; //if list1 pointer returns null, return the remaining list2
        }
        else 
        {
            currentNode->next = list1; //if list2 pointer returns null, return the remaining list1
        }
        return headNode;
    }
};