
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node* CreateNode(int x)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    newNode->data = x;
    newNode->next = NULL;

    return newNode;
}

// Function to insert a node at the beginning
struct Node* insertAtfront(struct Node *head, int x)
{
    struct Node *newNode = CreateNode(x);

    newNode->next = head;
    return newNode;
}

// Function to print the linked list
void printList(struct Node *head)
{
    struct Node *current = head;

    while (current != NULL)
    {
        printf("%d", current->data);

        if (current->next != NULL)
            printf(" -> ");

        current = current->next;
    }

    printf("\n");
}

int main()
{
    struct Node *head = CreateNode(1);

    head->next = CreateNode(2);
    head->next->next = CreateNode(3);
    head->next->next->next = CreateNode(4);

    // Insert a new node at the beginning
    int x = 5;
    head = insertAtfront(head, x);

    // Print the linked list
    printList(head);

    return 0;
}

// o/p= 5 -> 1 -> 2 -> 3 -> 4
