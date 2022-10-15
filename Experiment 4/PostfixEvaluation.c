#include <stdio.h>
#include <ctype.h>
int st[10];
int top = -1;

void push(int x)
{
    st[++top] = x;
}

int pop()
{
    return st[top--];
}

int main()
{
    char express[10];
    char *exp;
    int a, b, res, num;
    printf("Enter expression: ");
    scanf("%s", express);
    exp = express;
    while (*exp != '\0')
    {
        if (isdigit(*exp))
        {
            num = *exp - 48;
            push(num);
        }
        else
        {
            a = pop();
            b = pop();
            switch (*exp)
            {
            case '+':
            {
                res = a + b;
                break;
            }
            case '-':
            {
                res = a - b;
                break;
            }
            case '*':
            {
                res = a * b;
                break;
            }
            case '/':
            {
                res = a / b;
                break;
            }
            }
            push(res);
        }
        exp++;
    }
    printf("Result: %s  =  %d\n", express, pop());
    return 0;
}
