// Include the standard input/output library
#include <stdio.h>
// Include the string library
#include <string.h>
// Define the maximum size of the stack
#define MAX 100
// Declare a global array to store the stack
char stack[MAX];
// Declare a global variable to store the top of the stack
int top = -1;
// Define a function to push an element to the stack
void push(char x) {
  // Check if the stack is full
  if (top == MAX - 1) {
    // Print an error message and return
    printf("Stack overflow\n");
    return;
  }
  // Increment the top and store the element at the top of the stack
  stack[++top] = x;
}
// Define a function to pop an element from the stack
char pop() {
  // Check if the stack is empty
  if (top == -1) {
    // Print an error message and return
    printf("Stack underflow\n");
    return -1;
  }
  // Return the element at the top of the stack and decrement the top
  return stack[top--];
}
// Define a function to check the precedence of an operator
int precedence(char x) {
  // Return a higher value for higher precedence operators
  if (x == '^') {
    return 3;
  } else if (x == '*' || x == '/') {
    return 2;
  } else if (x == '+' || x == '-') {
    return 1;
  } else {
    return 0;
  }
}
// Define a function to convert infix to postfix
void infixToPostfix(char infix[], char postfix[]) {
  // Declare variables to store the index of the infix and postfix expressions
  int i = 0, j = 0;
  // Declare a variable to store the current character of the infix expression
  char x;
  // Loop through the infix expression until the end of the string
  while (infix[i] != '\0') {
    // Store the current character in x
    x = infix[i];
    // If x is an operand, append it to the postfix expression
    if (x >= 'A' && x <= 'Z') {
      postfix[j++] = x;
    }
    // If x is an operator, check the precedence and associativity of x and the top of the stack
    else if (x == '^' || x == '*' || x == '/' || x == '+' || x == '-') {
      // If the stack is empty or x has higher precedence than the top of the stack, push x to the stack
      if (top == -1 || precedence(x) > precedence(stack[top])) {
        push(x);
      }
      // If x has lower or equal precedence than the top of the stack, pop the operators from the stack and append them to the postfix expression until the stack is empty or x has higher precedence than the top of the stack
      else {
        while (top != -1 && precedence(x) <= precedence(stack[top])) {
          // If x and the top of the stack are both '^', then x has higher precedence due to right associativity
          if (x == '^' && stack[top] == '^') {
            break;
          }
          // Otherwise, pop the operator from the stack and append it to the postfix expression
          postfix[j++] = pop();
        }
        // Push x to the stack
        push(x);
      }
    }
    // If x is an opening parenthesis, push it to the stack
    else if (x == '(') {
      push(x);
    }
    // If x is a closing parenthesis, pop the operators from the stack and append them to the postfix expression until an opening parenthesis is encountered
    else if (x == ')') {
      while (stack[top] != '(') {
        postfix[j++] = pop();
      }
      // Pop and discard the opening parenthesis
      pop();
    }
    // Increment the index of the infix expression
    i++;
  }
  // Pop the remaining operators from the stack and append them to the postfix expression
  while (top != -1) {
    postfix[j++] = pop();
  }
  // Add a null character to the end of the postfix expression
  postfix[j] = '\0';
}
// Define a function to reverse a string
void reverse(char str[], int len) {
  // Declare variables to store the start and end indices of the string
  int start = 0, end = len - 1;
  // Declare a variable to store a temporary character
  char temp;
  // Loop until the start and end indices cross each other
  while (start < end) {
    // Swap the characters at the start and end indices
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    // Increment the start and decrement the end
    start++;
    end--;
  }
}
// Define a function to convert infix to prefix
void infixToPrefix(char infix[], char prefix[]) {
  // Declare a variable to store the length of the infix expression
  int len = strlen(infix);
  // Reverse the infix expression
  reverse(infix, len);
  // Replace the opening and closing parentheses
  for (int i = 0; i < len; i++) {
    if (infix[i] == '(') {
      infix[i] = ')';
    } else if (infix[i] == ')') {
      infix[i] = '(';
    }
  }
  // Convert the reversed infix expression to postfix expression
  infixToPostfix(infix, prefix);
  // Reverse the postfix expression to get the prefix expression
  reverse(prefix, strlen(prefix));
}
// Define the main function
int main() {
  // Declare arrays to store the infix and prefix expressions
  char infix[MAX], prefix[MAX];
  // Prompt the user to enter the infix expression
  printf("Enter infix : ");
  // Read the infix expression from the standard input stream
  scanf("%s", infix);
  // Convert the infix expression to prefix expression
  infixToPrefix(infix, prefix);
  // Print the prefix expression to the standard output stream
  printf("Prefix : %s\n", prefix);
  // Return 0 to indicate successful termination
  return 0;
}