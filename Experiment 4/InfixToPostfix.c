#include<stdio.h>
#include<ctype.h>

char st[10];
int top = -1;

void push(char x)
{
    st[++top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return st[top--];
}

int order(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

int main()
{
    char express[10];
    char *exp, x;
    printf("Expression: ");
    scanf("%s",express);
    exp = express;
    
    while(*exp != '\0')
    {
        if(isalnum(*exp))
            printf("%c ",*exp);
        else if(*exp == '(')
            push(*exp);
        else if(*exp == ')')
        {
            while((x = pop()) != '(')
                printf("%c ", x);
        }
        else
        {
            while(order(st[top]) >=order(*exp))
                printf("%c ",pop());
            push(*exp);
        }
        exp++;
    }
    
    while(top != -1)
    {
        printf("%c ",pop());
    }return
    0;
}
