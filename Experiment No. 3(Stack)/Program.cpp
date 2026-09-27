#include <iostream>
using namespace std;

class Stack
{
    char st[100];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void isvalid(string ch)
    {

        for (int i = 0; i < ch.size(); i++)
        {

            if (ch[i] == '(' || ch[i] == '{' || ch[i] == '[')
            {

                top++;
                st[top] = ch[i];
            }

            else if (ch[i] == ')' || ch[i] == '}' || ch[i] == ']')
            {

                if (top == -1)
                {
                    cout << "is not well parenthesized\n";
                    return;
                }

                if ((st[top] == '(' && ch[i] == ')') ||
                    (st[top] == '{' && ch[i] == '}') ||
                    (st[top] == '[' && ch[i] == ']'))
                {

                    top--;
                }
                else
                {
                    cout << "is not well parenthesized\n";
                    return;
                }
            }
        }

        if (top == -1)
        {
            cout << "is well parenthesized\n";
        }
        else
        {
            cout << "is not well parenthesized\n";
        }
    }
};

int main()
{

    Stack s;

    string ch;

    cout << "Enter an expression: ";
    cin >> ch;

    s.isvalid(ch);

    return 0;
}
