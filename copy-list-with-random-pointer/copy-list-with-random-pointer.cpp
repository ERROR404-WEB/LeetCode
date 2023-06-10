
class Solution {
public:
    Node* copyRandomList(Node* head) {
       Node* node=head;
       while(node)
       {
       	Node* temp=node->next;
        node->next=new Node(node->val);
        node->next->next=temp;
        node=temp;
       }
       node=head;
       while(node)
       {
       	if(node->random)
        node->next->random=node->random->next;
        node=node->next->next; 
        }
        Node* ans=new Node(0); // first node is a dummy node
        Node* helper=ans;

        while(head){
            	helper->next=head->next;
                	helper=helper->next;
                    head->next=head->next->next;
                    head=head->next;    
                }
            return ans->next; 

    }
};