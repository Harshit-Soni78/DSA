//Converting infix expression to prefix

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100
char pre[100];
char rev[100];
void reverse(char str[]);

struct Stack {
    int top;
    char items[MAX_SIZE];
};

void push(struct Stack *s, char item) {
    if (s->top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    s->top++;
    s->items[s->top] = item;
}

char pop(struct Stack *s) {
    if (s->top == -1) {
        printf("Stack underflow\n");
        return -1;
    }
    char item = s->items[s->top];
    s->top--;
    return item;
}

int precedence(char ch) {
    switch (ch) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
    }
    return -1;
}

void infixToPostfix(const char *infix) {
	int k=0;
    struct Stack stack;
    stack.top = -1;

    int len = strlen(infix);
    int i;
    for ( i = 0; i < len; i++) {
        char ch = infix[i];
        switch (ch) {
            case '(':
                push(&stack, ch);
                break;
            case ')':
                while (stack.top != -1 && stack.items[stack.top] != '(') {
                    pre[k++]= pop(&stack);
                }
                pop(&stack);
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                while (stack.top != -1 && precedence(ch) <= precedence(stack.items[stack.top])) {
                    pre[k++] = pop(&stack);
                }
                push(&stack, ch);
                break;
            default:
                pre[k++] = ch;
        }
    }

    while (stack.top != -1) {
        pre[k++] = pop(&stack);
    }
}

int main(){
	char str[MAX_SIZE];
	printf("Enter an infix expression : ");
    scanf("%s",str);
	reverse(str);

	printf("\n");
	infixToPostfix(rev);
	
	reverse(pre);
	return 0;
}

void reverse(char str[]){
    int len = strlen(str);
    int i,j;
    for(i=0, j=len-1; i<=len;i++,j--){
        rev[i] = str[j];
    }
    rev[len] ='\0';
    printf("\n");
    for(i=0;i<len;i++){
        printf("%c",rev[i]);
    }
}