#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
}*top=NULL;

void push(int item);
int pop();
int peek();
void display();

void main()
{
    int choice,item;
    while(1)
    {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display item at the top\n");
        printf("4. Display all items of stack\n");
        printf("5. Quit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the item to be pushed\n");
                scanf("%d",&item);
                push(item);
                break;
            case 2:
                
                printf("Popped item is %d\n",pop());
                break;
            case 3:
                printf("Item at the top is %d\n",peek());
                break;
            case 4:
                display();
                break;
            case 5:
                exit(1);
            default:
                printf("Wrong choice\n");

        }
    }
}

void push(int item)
{
    struct node *temp;
    temp= (struct node *)malloc(sizeof(struct node));
    if(temp == NULL)
    {
        printf("Stack Overflow\n");
        return;
    }
    else
    {
        temp->data=item;
        temp->next=top;
        top=temp;
    }
}

int pop()
{
    struct node *temp;
    int item;
    if(top == NULL)
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    temp=top;
    item=temp->data;
    top=temp->next;
    free(temp);
    return item;
}

int peek()
{
    if(top == NULL)
        printf("Stack Underflow\n");
    return top->data;
}

void display()
{
    struct node *ptr;
    ptr=top;
    if(top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    else{
        printf("Stack elements are:\n");
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
    }
}