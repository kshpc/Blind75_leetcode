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
    ListNode* reverseList(ListNode* head) 
    {
/*checking if head node is null and next node in linked list is null*/
      if(head == nullptr || head->next == nullptr ) return head;
        
      ListNode* previous = nullptr; //assigning null value to previous 
      ListNode* current = head; // asssigning head node to current node
      ListNode* next  = current->next; // here next node is assigned with current.nexrt value
        
      while(current != nullptr) //traversing until current node reaches null
      {
     /*logic for reversing the linked list*/
          next = current->next;  // here next node is assigned with current.nexrt value
          current->next = previous; // here previous is assigned to current.next node value
          previous = current;  // here currrent value of node is assigned to previous node
          current = next; // here next node is assigned to current node
      }
      return previous;  //return previous
    }
};