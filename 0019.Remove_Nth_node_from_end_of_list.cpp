/*Description: Given the head of a linked list, remove the nth node from the end of the list and return its head.

//runtime: 4ms (faster than 80% of submissions)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int listSize=0;
        ListNode* incrament;
        for(incrament=head;incrament!=nullptr;incrament=incrament->next){
            listSize++;
        }
        int deletePosition=listSize-n;
        ListNode* deleter;
        int counter=0;
        ListNode* prev;
        if(deletePosition==0){
            deleter=head;
            head=head->next;
            delete deleter;
            return head;
        }
        for(deleter=head; counter<=deletePosition; deleter=deleter->next){
            if(counter==deletePosition){
                prev->next=deleter->next;
                delete deleter;
                break;
            }
            else{
            counter++;
            prev=deleter;
            }
        }
        return head;
    }
};
