class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

// base case 
        if (list1 == NULL) {
            return list2;
        }
 
        if (list2 == NULL) {
            return list1;
        }

        ListNode* current ;

        if(list1->val < list2-> val)
        {
            current= list1;
            current->next= mergeTwoLists(list1->next,list2);
        }
        else 
        {
            current= list2;
            current -> next= mergeTwoLists(list1 ,list2->next);
        }

        return current;

        


    }
       
        

};
