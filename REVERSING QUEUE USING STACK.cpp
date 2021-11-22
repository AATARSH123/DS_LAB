#include <stdio.h>
#include<string.h>
#define size 100
char a[size];
char b[size];
int top=-1;
int front=0;
int rear=-1;
void push(char s)
{
    top++;
    a[top]=s;
}
void enquene(char s)
{
    rear++;
    b[rear]=s;
}
char pop()
{
    char c=a[top];
    top--;
    return(c);
    
}
char dequeue()
{
    char d=b[front];
    front++;
    return(d);
    
}
int main()
{
    printf("enter string :");
    char a[20];
    scanf("%s",a);
    int len =strlen(a);
    int i;
    for(i=0;i<len;i++)
    {
        enquene(a[i]);
    }
    for(i=0;i<len;i++)
    {
        char c=dequeue();
        push(c);
    }
    for(i=0;i<len;i++)
    {
        char d=pop();
        enquene(d);
    }
    for(i=0;i<len;i++)
    {
        printf(" %c",dequeue());
    }
    return 0;
}

/* OUTPUT
enter string :AATARSH
 H S R A T A A
--------------------------------
Process exited after 11.63 seconds with return value 0
Press any key to continue . . .*/
