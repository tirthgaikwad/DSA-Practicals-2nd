#include <iostream>
#include <string>
using namespace std;

struct Node
{
    int PRN;
    string name;
    Node *next;
};

class List
{
    Node *head = NULL;

public:
    Node *createNode(int PRN, string name)
    {
        Node *nn = new Node();
        nn->PRN = PRN;
        nn->name = name;
        nn->next = NULL;
        return nn;
    }

public:
    void Addpre(int prn, string name)
    {
        Node *nn = createNode(prn, name);
        nn->next = head;
        head = nn;
        cout << "ADD preenint properly\n";
    }

public:
    void Addsec(int prn, string name)
    {
        Node *nn = createNode(prn, name);
        if (head == NULL)
        {
            head = nn;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = nn;
            cout << "SUssecfully add sec\n";
        }
    }

public:
    void addMem(int prn, string name)
    {
        Node *nn = createNode(prn, name);
        if (head == NULL)
        {
            head = nn;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL && temp->next->next != NULL)
            {
                temp = temp->next;
            }
            if (temp->next == NULL)
            {
                temp->next = nn;
            }
            else
            {
                nn->next = temp->next;
                temp->next = nn;
            }
        }
        cout << "ADDed member\n";
    }

public:
    void display()
    {
        if (head == NULL)
        {
            cout << "club is empty\n";
            return;
        }
        Node *temp = head;
        cout << "\n--- Pinnacle Club Members ---\n";
        while (temp != NULL)
        {
            cout << "PRN- " << temp->PRN << "  Name- " << temp->name;
            if (temp == head)
            {
                cout << " (President)";
            }
            else if (temp->next == NULL)
            {
                cout << " (Secretary)";
            }
            cout << endl;
            temp = temp->next;
        }
    }

public:
    void delPre()
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

public:
    void delSec()
    {

        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }

public:
    void delMem(int prn)
    {
        Node *temp = head;
        while (temp->next != NULL && temp->next->next != NULL)
        {

            if (temp->next->PRN == prn)
            {
                Node *del = temp->next;
                temp->next = del->next;
                delete del;

                cout << "Member deleted\n";
                return;
            }
            temp = temp->next;
        }
        cout << "Member Not Found\n";
    }

public:
    void countM()
    {
        Node *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        cout << "Total Member of Club is: " << count;
    }

public:
    void concat()
    {
        Node *head2 = NULL;
        Node *tail2 = NULL;

        int n, prn;
        string name;

        cout << "Enter number of members in second division: ";
        cin >> n;

        // Create second linked list
        for (int i = 0; i < n; i++)
        {
            cout << "Enter PRN and Name: ";
            cin >> prn >> name;

            Node *newNode = createNode(prn, name);

            if (head2 == NULL)
            {
                head2 = newNode;
                tail2 = newNode;
            }
            else
            {
                tail2->next = newNode;
                tail2 = newNode;
            }
        }

        // Join two linked lists
        if (head == NULL)
        {
            head = head2;
        }
        else
        {
            Node *temp = head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = head2;
        }

        cout << "Two lists concatenated successfully!\n";
    }
};
int main()
{
    List l;
    int prn;
    string name;
    prn = 101;
    name = "Tirth";
    l.Addpre(prn, name);
    prn = 102;
    name = "LUCky";
    l.addMem(prn, name);
    prn = 103;
    name = "OM";
    l.addMem(prn, name);
    prn = 104;
    name = "sujal";
    l.addMem(prn, name);
    prn = 105;
    name = "kalu";
    l.Addsec(prn, name);
    l.display();
    l.countM();
    l.concat();
    l.display();
    return 0;
}
