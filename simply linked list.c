//this program is an implementation of simply linked list , we have 3 pre-defined data for the list.

#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL,*first,*second,*third, *current;
    
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    
    head = first;
    
    first->data = 10;
    first->next = second;
    
    second->data = 20;
    second->next = third;
    
    third->data = 30;
    third->next = NULL;
    
    printf("Your Data Is :-\n");
    current = head;
    while (current != NULL)
    {
        printf("%d ",current->data);
        current = current->next;
    }
    return 0;
}
