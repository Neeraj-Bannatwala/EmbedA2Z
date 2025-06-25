#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *first = (struct Node*) malloc(sizeof(struct Node));
    struct Node *second = (struct Node*) malloc(sizeof(struct Node));
    struct Node *third = (struct Node*) malloc(sizeof(struct Node));

    first->data = 1;
    first->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    struct Node *Head = first;
    struct Node *temp = Head;
    int count = 0;

    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    printf("number of elements in structure is %d",count);
    

    return 0;
}