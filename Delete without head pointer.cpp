
class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del_node)
    {
       // Your code here
       if(del_node==NULL){
           delete del_node;
           return;
       }
       Node *temp=del_node->next;
       del_node->data=temp->data;
       del_node->next=temp->next;
       delete temp;
    }

};