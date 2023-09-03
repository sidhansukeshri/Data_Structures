#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head=NULL,*n,*temp,*prev;
    int a;
    printf("Enter the no of data : ");
    scanf("%d",&a);
    for (int i=0;i<a;i++)
    {
        n=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data : ");
        scanf("%d",&n->data);
        n->next=NULL;
        if (head==NULL)
        {
            head=n;
            n->next=head;
        }
        else
        {
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            
            n->next=head;
            head=n;
            temp->next=head;
            
        }
    }
    printf("\n");
    printf("the data is : \n");
    printf("\n");
    temp=head;
    while(1)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
            if (temp==head)
            {
                break;
            }
        }
    return 0;
}
