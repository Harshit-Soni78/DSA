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
// Define a function to convert postfix to infix
void postfixToInfix(char postfix[], char infix[]) {
  // Declare variables to store the index of the postfix and infix expressions
  int i = 0, j = 0;
  // Declare a variable to store the current character of the postfix expression
  char x;
  // Loop through the postfix expression until the end of the string
  while (postfix[i] != '\0') {
    // Store the current character in x
    x = postfix[i];
    // If x is an operand, append it to the infix expression
    if (x >= 'A' && x <= 'Z') {
      infix[j++] = x;
    }
    // If x is an operator, pop two operands from the stack and concatenate them with x in between
    else if (x == '^' || x == '*' || x == '/' || x == '+' || x == '-') {
      // Pop the second operand from the stack
      char op2 = pop();
      // Pop the first operand from the stack
      char op1 = pop();
      // Create a string by concatenating the operands and the operator
      char temp[4];
      temp[0] = '(';
      temp[1] = op1;
      temp[2] = x;
      temp[3] = op2;
      // Push the string to the stack
      for (int k = 0; k < 4; k++) {
        push(temp[k]);
      }
    }
    // Increment the index of the postfix expression
    i++;
  }
  // Pop the remaining string from the stack and append it to the infix expression
  while (top != -1) {
    infix[j++] = pop();
  }
  // Add a null character to the end of the infix expression
  infix[j] = '\0';
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
// Define a function to convert postfix to prefix
void postfixToPrefix(char postfix[], char prefix[]) {
  // Declare a variable to store the length of the postfix expression
  int len = strlen(postfix);
  // Reverse the postfix expression
  reverse(postfix, len);
  // Convert the reversed postfix expression to infix expression
  postfixToInfix(postfix, prefix);
  // Reverse the infix expression to get the prefix expression
  reverse(prefix, strlen(prefix));
}
// Define the main function
int main() {
  // Declare arrays to store the postfix and prefix expressions
  char postfix[MAX], prefix[MAX];
  // Prompt the user to enter the postfix expression
  printf("Enter postfix : ");
  // Read the postfix expression from the standard input stream
  scanf("%s", postfix);
  // Convert the postfix expression to prefix expression
  postfixToPrefix(postfix, prefix);
  // Print the prefix expression to the standard output stream
  printf("Prefix : %s\n", prefix);
  // Return 0 to indicate successful termination
  return 0;
}
