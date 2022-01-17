 /*#include<stdio.h>
#include<string.h>

    void main(){
    char st1[10] = "ankit";
    char *str2 = "anshu";
   // printf("Enter your name\n");
   // gets(st);
    //puts(st);
    int a = strcmp(st1 , str2);
    printf("your connection is - or +  = %d" , a); 
}*/
 // answer 5
 /*#include <stdio.h>
char arr[] = "EAS*Y*QUE***ST***IO*N***", t1[20], t2[20];
int top = -1;
char pop()
{
 if (top < 0)
 {
 printf("Stack Underflow.");
 }
 else
 {
 top--;
 }
 return t1[top + 1];
}
void push(char x)
{
 static int i = 0;
 if (top >= 24)
 {
 printf("Stack Overflow.");
 }
 else if (x == '*')
 {
 t2[i++] = pop();
 }
 else
 {
 t1[++top] = x;
 }
}
void main()
{
 int i;
 printf("%s\n", arr);
 for (i = 0; i < 24; i++)
 {
 push(arr[i]);
 }
 for (i = 0; i < 24; i++)
 {
 printf("%c", t2[i]);
 }
}
*/
// answer 6
  #include <stdio.h>
 #include <string.h>
#include <stdlib.h>
#include <limits.h>
struct Stack
{
    int top;
    unsigned capacity;
    char* array;
};
struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (char*) malloc(stack->capacity * sizeof(char));
    return stack;
}
int isFull(struct Stack* stack)
{ return stack->top == stack->capacity - 1; }

int isEmpty(struct Stack* stack)
{ return stack->top == -1; }
void push(struct Stack* stack, char item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
}
char pop(struct Stack* stack)
{
    if (isEmpty(stack))
        return 0;
    return stack->array[stack->top--];
}
void reverse(char str[])
{  
    int n = strlen(str);
    struct Stack* stack = createStack(n);
    int i;
    for (i = 0; i < n; i++)
        push(stack, str[i]);

    for (i = 0; i < n; i++)
        str[i] = pop(stack);
}
 int main()
{
    char str[] = "HELLOWORLD";
    reverse(str);
    printf("Reversed string is %s", str);

    return 0;
} 
