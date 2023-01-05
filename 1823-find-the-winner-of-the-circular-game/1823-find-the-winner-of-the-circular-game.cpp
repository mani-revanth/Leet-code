class Solution {
public:
    struct node{
        int val;
        struct node *next;
    };
    struct node *head=NULL,*temp=NULL;
    int findTheWinner(int n, int k) {
        if(k==1)
            return n;
        for(int i=1;i<=n;i++)
        {
            struct node *p=new node;
            p->val=i;
            p->next=head;
            if(head==NULL)
                head=temp=p;
            else
            {
                temp->next=p;
                temp=p;
            }
        }
        struct node *temp1=head;
        int t=0;
        while((temp1->next)!=temp1)
        {
            t++;
            if((t+1)==k)
            {
                temp1->next=temp1->next->next;
                t=0;
            }
            temp1=temp1->next;
        }
        return temp1->val;
    }
};