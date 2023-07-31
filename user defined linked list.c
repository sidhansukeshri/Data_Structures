//this is a program in which user inputs the no of data to enter and the data for the list , which creats a simply linked list and then prints the output.

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
    struct node *n, *temp;
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
            head = n;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = n; // Set the next pointer of the last node to point to the new node.

        }
    }

    printf("\n");
    printf("Your Data is:-\n");
    struct node *current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }


    return 0;
}
