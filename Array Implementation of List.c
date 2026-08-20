#include <stdio.h>

#define MAX 10

int list[MAX];
int size = 0;

// 1. INSERT
void insert(int pos, int value)
{
    int i;

    if (size == MAX)
    {
        printf("List is full\n");
        return;
    }

    if (pos < 0 || pos > size)
    {
        printf("Invalid position\n");
        return;
    }

    for (i = size; i > pos; i--)
    {
        list[i] = list[i - 1];
    }

    list[pos] = value;
    size++;

    printf("Element is inserted at position %d\n", pos);
}

// 2. DELETE
void del(int pos)
{
    int i;

    if (size == 0)
    {
        printf("List is empty\n");
        return;
    }

    if (pos < 0 || pos >= size)
    {
        printf("Invalid position\n");
        return;
    }

    for (i = pos; i < size - 1; i++)
    {
        list[i] = list[i + 1];
    }

    size--;

    printf("Element is deleted\n");
}

// 3. FIND
void find(int element)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (list[i] == element)
        {
            printf("Element is found at position %d\n", i);
            return;
        }
    }

    printf("Element is not found\n");
}

// 4. DISPLAY
void display()
{
    int i;

    if (size == 0)
    {
        printf("List is empty\n");
        return;
    }

    for (i = 0; i < size; i++)
    {
        printf("%d ", list[i]);
    }

    printf("\n");
}

// 5. UPDATE
void update(int pos, int value)
{
    if (pos < 0 || pos >= size)
    {
        printf("Invalid position\n");
        return;
    }

    list[pos] = value;

    printf("Element is updated\n");
}

int main()
{
    int choice, pos, value;

    while (1)
    {
        printf("\n--- LIST OPERATIONS ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Find\n");
        printf("4. Display\n");
        printf("5. Update\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter position: ");
                scanf("%d", &pos);

                printf("Enter value: ");
                scanf("%d", &value);

                insert(pos, value);
                break;

            case 2:
                printf("Enter position: ");
                scanf("%d", &pos);

                del(pos);
                break;

            case 3:
                printf("Enter element to find: ");
                scanf("%d", &value);

                find(value);
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Enter position: ");
                scanf("%d", &pos);

                printf("Enter new value: ");
                scanf("%d", &value);

                update(pos, value);
                break;

            case 6:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
