#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *link;
};

struct node *header = NULL;

void insertAtFront(int item)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->link = NULL;

    if (header == NULL)
    {
        header = newnode;
    }
    else
    {
        newnode->link = header;
        header = newnode;
    }
}

void traverse()
{
    struct node *ptr;
    ptr = header;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}

void insertAtEnd(int item)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->link = NULL;

    if (header == NULL) 
    {
        header = newnode;
    }
    else
    {
        struct node *ptr;
        ptr = header;
        while (ptr->link != NULL) 
        {
            ptr = ptr->link;
        }
        ptr->link = newnode;
    }
}

void insertAtAny(int key, int item)
{
    struct node *ptr = header;
    struct node *prev = NULL;
    struct node *newnode;
    
    while (ptr != NULL)
    {
        if (ptr->data == key)
        {
            newnode = (struct node*)malloc(sizeof(struct node));
            newnode->data = item;
            newnode->link = ptr;

            if (prev == NULL)
            {
                header = newnode;
            }
            else
            {
                prev->link = newnode;
	    }
            return;
        }
        prev = ptr;
        ptr = ptr->link;
    }
    printf("Key %d not found. Insertion not possible.\n", key);
}

void deleteAtFront()
{
	struct node *ptr;
	if(header == NULL)
	{
		printf("Empty List. Deletion not possible");
	}
	else
	{
		ptr = header;
		header = header -> link;
		free(ptr);
	}
}

void deleteAtEnd()
{
	struct node *ptr;
	struct node *ptr1;
	if(header == NULL)
	{
		printf("Empty List. Deletion not possible");
	}
	else
	{
		while(ptr -> link != NULL)
		{
			ptr1 = ptr;
			ptr = ptr -> link;
		}
		ptr1 -> link = NULL;
		free(ptr);
	}
}

void deleteAtAny(int key)
{
	struct node *ptr, *ptr1;
	ptr = header;
	ptr1 = NULL;
	
	while(ptr != NULL && ptr -> data != key)
	{
		ptr1 = ptr;
		ptr = ptr -> link;
	}
	if(ptr == NULL)
	{
		printf("Key Not found, Deletion not possible");
	}
	else
	{
		printf("Deleted element is %d", ptr -> data);
		if(ptr1 != NULL)
		{
			ptr1 -> link = ptr -> link;
		}
		else
		{
			header = ptr -> link;
		}
		free(ptr);
	}
}

int main()
{
	int choice, item, key;

	while (1)
	{
        	printf("\n------ MENU ------\n");
        	printf("1. Insert at Front\n");
		printf("2. Insert at End\n");
		printf("3. Insert Before Key (Insert at Any)\n");
		printf("4. Delete at Front\n");
		printf("5. Delete at End\n");
		printf("6. Delete by Key (Delete at Any)\n");
		printf("7. Traverse\n");
		printf("8. Exit\n");
		printf("------------------\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
	
		switch (choice)
		{
		    case 1:
		        printf("Enter item to insert at front: ");
		        scanf("%d", &item);
		        insertAtFront(item);
		        break;

		    case 2:
		        printf("Enter item to insert at end: ");
		        scanf("%d", &item);
		        insertAtEnd(item);
		        break;

		    case 3:
		        printf("Enter key to insert before: ");
		        scanf("%d", &key);
		        printf("Enter item to insert: ");
		        scanf("%d", &item);
		        insertAtAny(key, item);
		        break;

		    case 4:
		        deleteAtFront();
		        break;

		    case 5:
		        deleteAtEnd();
		        break;

		    case 6:
		        printf("Enter key to delete: ");
		        scanf("%d", &key);
		        deleteAtAny(key);
		        break;

		    case 7:
		        printf("Linked List elements:\n");
		        traverse();
		        break;

		    case 8:
		        printf("Exiting...\n");
		        exit(0);

		    default:
		        printf("Invalid choice! Please try again.\n");
		}
	}
	return 0;
}

