// #include <stdio.h>
// #include <stdlib.h>
// typedef struct
// {
//     int *stack;
//     int top;
//     int capacity;
// } Stack;
// Stack *createStack(int capacity)
// {
//     Stack *newStack = (Stack *)malloc(sizeof(Stack));
//     newStack->stack = (int *)malloc(capacity * sizeof(int));
//     newStack->top = -1;
//     newStack->capacity = capacity;
//     return newStack;
// }
// void Push(Stack *S, int element)
// {
//     if (S->top == S->capacity)
//     {
//         printf("OverFlow");
//         return;
//     }
//     S->stack[S++->top] = element;
// }
// void printStack(Stack *s)
// {
//     printf("Stack: ");
//     for (int i = 0; i <= s->top; ++i)
//     {
//         printf("%c ", s->stack[i]);
//     }
//     printf("\n");
// }
// int main()
// {
//     Stack *myStack = createStack(100);
//     Push(myStack, 10);
//     Push(myStack, 20);
//     Push(myStack, 30);
//     Push(myStack, 40);
//     printStack(myStack);
//     // printf("hello");
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *stack;
    int top;
    int capacity;
} Stack;

Stack *createStack(int capacity)
{
    Stack *newStack = (Stack *)malloc(sizeof(Stack));
    newStack->stack = (int *)malloc(capacity * sizeof(int));
    newStack->top = -1;
    newStack->capacity = capacity;
    return newStack;
}

void push(Stack *s, int element)
{
    if (s->top == s->capacity - 1)
    {
        printf("Stack is full\n");
        return;
    }
    s->stack[++s->top] = element;
}

int pop(Stack *s)
{
    if (s->top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    return s->stack[s->top--];
}

int peek(Stack *s)
{
    if (s->top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    return s->stack[s->top];
}

int isEmpty(Stack *s)
{
    return s->top == -1;
}

int size(Stack *s)
{
    return s->top + 1;
}

void printStack(Stack *s)
{
    printf("Stack: ");
    for (int i = 0; i <= s->top; ++i)
    {
        printf("%c ", s->stack[i]);
    }
    printf("\n");
}

int main()
{
    Stack *myStack = createStack(100);

    push(myStack, 'A');
    push(myStack, 'B');
    push(myStack, 'C');

    // Print initial stack
    printStack(myStack);

    printf("Pop: %c\n", pop(myStack));
    printf("Peek: %c\n", peek(myStack));
    printf("isEmpty: %d\n", isEmpty(myStack));
    printf("Size: %d\n", size(myStack));

    return 0;
}