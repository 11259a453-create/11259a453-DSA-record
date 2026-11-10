#include <stdio.h>
#include <ctype.h>   
#include <stdlib.h>  
#define MAX 100
int stack[MAX];
int top = -1;
void push(int value) {
    if (top >= MAX - 1) {
        printf("Stack Overflow\n");
        exit(1);
    }
    stack[++top] = value;
}
int pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack[top--];
}
 int evaluatePostfix(char* exp) 
 {
    int i = 0;
    int op1,op2,result;
    while (exp[i] != '\0') {
        if (isdigit(exp[i])) {
            push(exp[i] - '0'); 
        } 
        else if(exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/') {
            op1 = pop(); 
            op2 = pop(); 
            switch (exp[i]) {
                case '+': Result(op2 + op1); break;
                case '-': Result(op2 - op1); break;
                case '*': Result(op2 * op1); break;
                case '/': 
                    if (op2 == 0) {
                        printf("Error: Division by zero\n");
                        exit(1);
                    }
                    result=op1 / op2; 
                    break;
            }
            push(result);
        }
        i++;
    }
    return pop(); 
 }
    int main() {
    char exp[MAX];
    printf("Enter a valid postfix expression (e.g., 532*+): ");
    scanf("%s", exp);
    int finalresult = evaluatePostfix(exp);
    printf("The result of the evaluation is: %d\n", finalresult);
    return 0;
 }
