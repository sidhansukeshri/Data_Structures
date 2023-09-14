//this is a program in which user inputs the no of data to enter and the data which gets added in the front of the list , that results in creation of a simply linked list and then  we print the output.

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
            n->next=temp;
            head = n;
        }
    }

    printf("\n");
    printf("Your Data is:-\n");
    temp= head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }


    return 0;
}
