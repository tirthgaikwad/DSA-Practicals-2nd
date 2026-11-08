#include <iostream>
using namespace std;
struct Node
{
    int bit;
    Node *pre, *next;
};

Node *head = NULL, *tail = NULL;
Node *head1 = NULL;

void insert(int bit)
{
    Node *nn = new Node();
    nn->bit = bit;
    nn->pre = tail;
    nn->next = NULL;

    if (head == NULL)
    {
        head = nn;
    }
    else
    {
        tail->next = nn;
    }
    tail = nn;
}
void display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->bit;
        temp = temp->next;
    }
    cout << endl;
}
void one()
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->bit == 0)
            temp->bit = 1;
        else
        {
            temp->bit = 0;
        }
        temp = temp->next;
    }
}
void two()
{
    Node *temp = tail;
    int flage = 1;
    while (temp != NULL && flage == 1)
    {
        if (temp->bit == 0)
        {
            temp->bit = 1;
            flage = 0;
        }
        else
        {
            temp->bit = 0;
        }
        temp = temp->pre;
    }
}

int main()
{
    string bit;
    cout << "ENter a binary No: ";

    cin >> bit;
    for (int i = 0; i < bit.length(); i++)
    {
        insert(bit[i] - '0');
    }
    cout << "origenal: ";
    display();
    one();
    cout << "1` comple: ";
    display();
    two();
    cout << "2` comple: ";
    display();

    return 0;
}
