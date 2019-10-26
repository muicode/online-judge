#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

typedef struct node
{
    uintptr_t both;
    char val;
} Node;

typedef struct XORLinkedList
{
    Node *root;
} xorlist;

void add(xorlist *list, const char val)
{
    Node *new_node = malloc(sizeof(*new_node));
    new_node->both = 0;
    new_node->val = val;

    /* 0 nodes */
    if (list->root == NULL)
    {
        list->root = new_node;
    }   
    /* 1 node */
    else if (list->root->both == 0)
    {
        list->root->both = (uintptr_t)new_node;
        new_node->both = (uintptr_t)list->root;
    }
    /* > 1 nodes */
    else
    {
        Node *curr_node = (Node *)list->root->both;
        uintptr_t prev_addr = (uintptr_t)list->root;

        while (curr_node->both != prev_addr)
        {
            Node *next_node = (Node *)(prev_addr ^ curr_node->both);
            prev_addr = (uintptr_t)curr_node;
            curr_node = next_node;
        }

        curr_node->both = prev_addr ^ (uintptr_t)new_node;
        new_node->both = (uintptr_t)curr_node;
    }
}

char get(xorlist *list, const size_t pos)
{
    if (pos == 0)
    {
        return list->root->val;
    }

    Node *curr_node = (Node *)list->root->both;
    uintptr_t prev_addr = (uintptr_t)list->root;

    for(size_t i=1; i<pos; ++i)
    {
        Node *next_node = (Node *)(prev_addr ^ curr_node->both);
        prev_addr = (uintptr_t)curr_node;
        curr_node = next_node;
    }

    return curr_node->val;
}

int main(void)
{
    xorlist *list = malloc(sizeof(*list));
    list->root = NULL;
    add(list, 'A');
    add(list, 'B');
    add(list, 'C');
    add(list, 'D');
    add(list, 'E');

    printf("%c\n", get(list, 0));
    printf("%c\n", get(list, 1));
    printf("%c\n", get(list, 2));
    printf("%c\n", get(list, 3));
    printf("%c\n", get(list, 4));

    return 0;
}
