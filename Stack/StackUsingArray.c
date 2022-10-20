#include<stdio.h>
#include<stdlib.h>
 
struct stack{
    int size ;
    int top;
    int * arr;
};
 
// int isEmpty(struct stack* ptr){
//     if(ptr->top == -1){
//             return 1;
//         }
//         else{
//             return 0;
//         }
// }
 
// int isFull(struct stack* ptr){
//     if(ptr->top == ptr->size - 1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
 
void push(struct stack *ptr, int val){
    if(ptr->top >= ptr->size){
        printf("Stack Overflow!\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
        printf("Pushed element is: %d\n",ptr->arr[ptr->top]);
    }
}
 
void pop(struct stack *ptr){
    if(ptr->top <= -1){
        printf("Stack Underflow!\n");
    }
    else{
        int val = ptr->arr[ptr->top];
        printf("Popped element is: %d\n",val);
        ptr->top--;
    }
}

void display(struct stack* ptr)
{
    int i;
    if(ptr->top <= -1)
    {
        printf("Stack Underflow!\n");
    }
    else
    {
        for(i=ptr->top; i>=0; i--)
        {
            printf("%d\t",ptr->arr[i]);
        }
        printf("\n");
    }
}

int peek(struct stack* sp, int i){
    int arrayInd = sp->top -i + 1;
    if(arrayInd < 0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return sp->arr[arrayInd];
    }
}

int main(){
	int i;
    struct stack *sp ;
    sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *) malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");
    
    push(sp,10);
    push(sp,20);
    push(sp,30);
    push(sp,40);
    push(sp,50);
    pop(sp);
    display(sp);
    for(i= 1; i<=sp->top+1 ; i++)
    {
        printf("The value at position %d is %d\n",i,peek(sp,i));
    }
    return 0;
}
