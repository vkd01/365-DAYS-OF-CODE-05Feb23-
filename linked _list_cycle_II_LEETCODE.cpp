class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(head==NULL or head->next == NULL)return NULL;
        
        map<ListNode*, int> hash;
        
        while(head!=NULL and hash[head]<2){
            hash[head]++;
            head = head->next;
        }
        
        
        return head;
    }
};