#include <stdio.h>
#define MAX 5
int top = -1;
int stack[MAX];
void push(int value) {
if (top<4){
    top++;
stack[top] = value;
}
}
int pop() {
if (top >= 0) {
   int val=stack[top];
    top--;
    return val;
}
return -1;
}
int peek()
{
    if(top>=0){
      return stack[top];
    }
        return -1;
    }
int main(){
    push(10);
    push(20);
    printf("Top item:%d\n",peek());
    printf("Popped:%d\n",pop());
    printf("Top item:%d\n",peek());
    return 0;
}
