#include <iostream>
using namespace std;
struct Node
{
    int bit;
    Node *pre, *next;
};

Node *head = NULL, *tail = NULL;

class Binary
{
    Node *head, *tail;

public:
    Binary() : head(NULL), tail(NULL) {}

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

public:
    void add(Binary b1, Binary b2)
    {
        head = tail = NULL;
        Node *t1 = b1.tail;
        Node *t2 = b2.tail;

        int carry = 0;

        // Both linked lists have bits
        while (t1 != NULL && t2 != NULL)
        {
            Node *nn = new Node;
            nn->pre = nn->next = NULL;

            // 8 cases
            if (t1->bit == 0 && t2->bit == 0 && carry == 0)
            {
                nn->bit = 0;
                carry = 0;
            }
            else if (t1->bit == 0 && t2->bit == 0 && carry == 1)
            {
                nn->bit = 1;
                carry = 0;
            }
            else if (t1->bit == 0 && t2->bit == 1 && carry == 0)
            {
                nn->bit = 1;
                carry = 0;
            }
            else if (t1->bit == 0 && t2->bit == 1 && carry == 1)
            {
                nn->bit = 0;
                carry = 1;
            }
            else if (t1->bit == 1 && t2->bit == 0 && carry == 0)
            {
                nn->bit = 1;
                carry = 0;
            }
            else if (t1->bit == 1 && t2->bit == 0 && carry == 1)
            {
                nn->bit = 0;
                carry = 1;
            }
            else if (t1->bit == 1 && t2->bit == 1 && carry == 0)
            {
                nn->bit = 0;
                carry = 1;
            }
            else if (t1->bit == 1 && t2->bit == 1 && carry == 1)
            {
                nn->bit = 1;
                carry = 1;
            }

            // Add result Node at MSB
            if (head == NULL)
            {
                head = tail = nn;
            }
            else
            {
                nn->next = head;
                head->pre = nn;
                head = nn;
            }

            t1 = t1->pre;
            t2 = t2->pre;
        }

        while (t1 != NULL)
        {
            Node *nn = new Node;
            nn->pre = nn->next = NULL;

            if (t1->bit == 0 && carry == 0)
            {
                nn->bit = 0;
                carry = 0;
            }
            else if (t1->bit == 0 && carry == 1)
            {
                nn->bit = 1;
                carry = 0;
            }
            else if (t1->bit == 1 && carry == 0)
            {
                nn->bit = 1;
                carry = 0;
            }
            else if (t1->bit == 1 && carry == 1)
            {
                nn->bit = 0;
                carry = 1;
            }

            nn->next = head;

            if (head != NULL)
            {
                head->pre = nn;
            }
            else
            {
                tail = nn;
            }

            head = nn;

            t1 = t1->pre;
        }

        while (t2 != NULL)
        {
            Node *nn = new Node;
            nn->pre = nn->next = NULL;

            if (t2->bit == 0 && carry == 0)
            {
                nn->bit = 0;
                carry = 0;
            }
            else if (t2->bit == 0 && carry == 1)
            {
                nn->bit = 1;
                carry = 0;
            }
            else if (t2->bit == 1 && carry == 0)
            {
                nn->bit = 1;
                carry = 0;
            }
            else if (t2->bit == 1 && carry == 1)
            {
                nn->bit = 0;
                carry = 1;
            }

            nn->next = head;

            if (head != NULL)
            {
                head->pre = nn;
            }
            else
            {
                tail = nn;
            }

            head = nn;

            t2 = t2->pre;
        }

        if (carry == 1)
        {
            Node *nn = new Node;

            nn->bit = 1;
            nn->pre = NULL;
            nn->next = head;

            if (head != NULL)
            {
                head->pre = nn;
            }
            else
            {
                tail = nn;
            }

            head = nn;
        }
    }
};
int main()
{
    Binary b1, b2, b3, result;
    string bit;
    cout << "ENter a binary No: ";

    cin >> bit;
    for (int i = 0; i < bit.length(); i++)
    {
        b1.insert(bit[i] - '0');
    }
    cout << "origenal: ";
    b1.display();
    b1.one();
    cout << "1` comple: ";
    b1.display();
    b1.two();
    cout << "2` comple: ";
    b1.display();

    cout << "\nEnter first binary number for addition: ";
    cin >> bit;
    for (int i = 0; i < bit.length(); i++)
    {
        b2.insert(bit[i] - '0');
    }

    cout << "\nEnter second binary number for addition: ";
    cin >> bit;
    for (int i = 0; i < bit.length(); i++)
    {
        b3.insert(bit[i] - '0');
    }

    result.add(b2, b3);
    result.display();

    return 0;
}
