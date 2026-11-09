#include <iostream>
using namespace std;
#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char ch)
{
    stack[++top] = ch;
}
char pop()
{
    return stack[top--];
}
bool isBalanced(string exp)
{

    for (int i = 0; i < exp.length(); i++)
    {
        char ch = exp[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']')
        {

            if (top == -1)
                return false;

            char x = pop();

            if (ch == ')' && x != '(' ||
                ch == '}' && x != '{' ||
                ch == ']' && x != '[')
            {
                return false;
            }
        }
    }

    return (top == -1);
}
int main()

{
    string exp;
    cout << "ENTER A EXPRESSION: ";
    cin >> exp;

    if (isBalanced(exp))
    {
        cout << "IS BALANCED\n";
    }
    else
    {
        cout << "IS NOT BALANCED\n";
    }
    return 0;
}
