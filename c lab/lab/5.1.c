#include<stdio.h>
#define size 5

int Q[size], REAR = -1, FRONT = -1;

void enqueue(int item)
{
    if ((FRONT == 0 && REAR == size - 1) || (REAR + 1) % size == FRONT)
    {
        printf("Queue is full!\n");
    }
    else
    {
        if (FRONT == -1) // first element
            FRONT = 0;
        
        REAR = (REAR + 1) % size;
        Q[REAR] = item;
    }
}

void dequeue()
{
    if (FRONT == -1)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        printf("Deleted element is: %d\n", Q[FRONT]);
        if (FRONT == REAR)
        {
            FRONT = -1;
            REAR = -1;
        }
        else
        {
            FRONT = (FRONT + 1) % size;
        }
    }
}

void display()
{
    if (FRONT == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue Elements are:\n");
        int i = FRONT;
        while (1)
        {
            printf("%d\n", Q[i]);
            if (i == REAR)
                break;
            i = (i + 1) % size;
        }
    }
}

int main()
{
    int count = 0, var, value;

    while (count != 1)
    {
        printf(" 1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Exit\n Choose a Choice: ");
        scanf("%d", &var);

        if (var == 1)
        {
            printf("Enter a value: ");
            scanf("%d", &value);
            enqueue(value);
        }
        else if (var == 2)
        {
            dequeue();
        }
        else if (var == 3)
        {
            display();
        }
        else if (var == 4)
        {
            count++;
            printf("Exited...\n");
            return 0;
        }
        else
        {
            printf("Invalid Number!!!\n");
        }
    }

    return 0;
}

