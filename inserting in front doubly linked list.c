#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};

int main()
{
    struct node *head=NULL,*n,*temp,*last;
    int a,count;
    printf("Enter the number of data you want to enter : ");
    scanf("%d",&a);
    for (int i=0;i<a;i++)
    {
        count++;
        n=(struct node *)malloc(sizeof(struct node));
        n->next=NULL;
        n->prev=NULL;
        printf("Enter data : ");
        scanf("%d",&n->data);
        if (head == NULL)
        {
            head=n;
        }
        else{
            temp=head;
            temp->prev=n;
            n->next=temp;
            head=n;
        }
    }
    printf("count : %d\n",count);
    printf("List in Ascending order!\n");
    temp=head;
    while (temp->next!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;

    }
    printf("%d",temp->data);
    printf("\n");
    printf("List in Descending order!\n");
    last=temp;
    while (last->prev!=NULL)
    {
        printf("%d\t",last->data);
        last=last->prev;

    }
    printf("%d",last->data);
    return 0;
}
