
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL;
    struct node *n, *temp, *pos;
    int a;
    printf("Enter the number of data you want to display : ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        n = (struct node*)malloc(sizeof(struct node));
        printf("Enter Data : ");
        scanf("%d", &n->data);
        n->next = NULL;

        if (head == NULL)
        {
            pos=n;
            head = n;
            
        }
        else
        {
            temp = head;
            n->next=temp;
            head=n;
            pos->next=head;
        }
    }

    printf("\n");
    printf("Your Data is:-\n");
    temp= head;
    while (temp->next!=head)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d",temp->data);
    return 0;
}
