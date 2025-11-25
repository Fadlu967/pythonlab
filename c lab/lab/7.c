#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5
int counter = 0;

struct stack
{
	int data;
	struct stack *link;
};

struct stack *TOP = NULL;

void pop()
{
	struct stack *ptr;
	if(TOP == NULL)
	{
		TOP = newnode;
		counter = counter + 1;
	}
	else
	{
		if(counter < MAX_SIZE)
		{
			newnode -> link = TOP;
			TOP = newnode;
			counter = counter + 1;
		}
		else
		{
			printf("Stack is full");
		}
	}
}

void push(int item)
{
    struct stack *newnode;
    newnode = (struct stack*)malloc(sizeof(struct stack));
    newnode->data = item;
    newnode->link = NULL;

    if (TOP == NULL)
    {
        TOP = newnode;
    }
    else
    {
    	if(counter < MAX_SIZE)
    	{
        	newnode->link = TOP;
        	TOP = newnode;
        }
        else
        {
        	printf("Stack is full");
        }
    }
    counter = counter + 1;
}
