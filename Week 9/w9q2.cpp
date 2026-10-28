#include <stdio.h>

#define MAX 100

typedef struct
{
    int n;
    char source, auxiliary, destination;
    int stage;
} Frame;

void hanoi_recursive(int n, char source,
                     char auxiliary, char destination)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n",
               source, destination);
        return;
    }

    hanoi_recursive(n - 1, source, destination, auxiliary);

    printf("Move disk %d from %c to %c\n",
           n, source, destination);

    hanoi_recursive(n - 1, auxiliary, source, destination);
}

void hanoi_nonrecursive(int n)
{
    Frame stack[MAX];
    int top = -1;

    stack[++top] = (Frame){n, 'A', 'B', 'C', 0};

    while (top >= 0)
    {
        Frame *f = &stack[top];

        if (f->n == 1)
        {
            printf("Move disk 1 from %c to %c\n",
                   f->source, f->destination);
            top--;
        }
        else if (f->stage == 0)
        {
            f->stage = 1;

            stack[++top] = (Frame){
                f->n - 1, f->source,
                f->destination, f->auxiliary, 0
            };
        }
        else if (f->stage == 1)
        {
            printf("Move disk %d from %c to %c\n",
                   f->n, f->source, f->destination);

            f->stage = 2;

            stack[++top] = (Frame){
                f->n - 1, f->auxiliary,
                f->source, f->destination, 0
            };
        }
        else
        {
            top--;
        }
    }
}

int main()
{
    int n, choice;

    printf("Enter number of disks (1-%d): ", MAX);
    scanf("%d", &n);

    if (n < 1 || n > MAX)
    {
        printf("Invalid number of disks.\n");
        return 0;
    }

    printf("1. Recursive\n");
    printf("2. Non-recursive\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            hanoi_recursive(n, 'A', 'B', 'C');
            break;

        case 2:
            hanoi_nonrecursive(n);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
