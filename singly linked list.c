//this program creates a singly linked list 
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};

int main(){
    struct node * head = NULL;
    struct node *n;
    int a;
    printf("Enter the no of data : ");
    scanf("%d",&a);
    for (int i=0;i<a;i++)
    {
        n=(struct node *)malloc(sizeof(struct node));
        printf("Enter the values of data : ");
        scanf("%d",&n->data);
        n->next=NULL;
        if (head ==NULL)
        {
            head =n;
        }
        else {
            struct node *temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = n;
        }

    }
    struct node * temp=head;
    while (temp !=NULL)
    {
        printf("%d ->",temp->data);
        temp=temp->next;
    }
        return 0;
}
