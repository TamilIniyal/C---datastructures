//STACK USING ARRAY
#include <stdio.h>
#include<stdlib.h>
#define SIZE 5
void push();
void pop();
void display();

int a[SIZE], item, top=-1;
void main()
{
   int ch;
   printf("***********STACK OPERATIONS USING ARRAY**********");
   while(1)
   {
   printf("\n\nSTACK OPERATIONS ARE:\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\nYOUR CHOICE IS:\t");
   scanf("%d", &ch);
   switch(ch)
   {
       case 1:push(); break;
       case 2:pop(); break;
       case 3:display(); break;
       case 4:exit(0);
       default:printf("Enter valid choice:");
       
    }
   }
}

void push()
{
    if (top == SIZE-1)
    {
        printf("\nThe stack is full or overflow\n");
    }
    else
    {
        printf("Enter the item to be pushed:\t");
        scanf("%d", &item);
        top = top + 1;
        a[top] = item;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("The stack is empty or underflow\n");
    }
    else
    {
        printf("The deleted element is:\t%d", a[top]);
        top = top - 1;
    }
}
void display()
{
    if (top == -1)
    {
        printf("The stack is empty or underflow");
    }
    else
    {
        printf("The contents of the stack are:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", a[i]);
        }
    }
}