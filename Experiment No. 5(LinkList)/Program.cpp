#include <iostream>
using namespace std;

struct node
{
    int PRN;
    string name;
    node *next;
};

struct List
{
    node *head;
    node *tail;

    List()
    {
        head = tail = NULL;
    }

    void addP(int prn, string Name)
    {
        node *newNode = new node();

        newNode->PRN = prn;
        newNode->name = Name;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void addM(int prn, string Name)
    {
        if (head == NULL)
        {
            cout << "First add President." << endl;
            return;
        }

        node *newNode = new node();

        newNode->PRN = prn;
        newNode->name = Name;
        newNode->next = NULL;

        tail->next = newNode;
        tail = newNode;
    }

    void addS(int prn, string Name)
    {
        if (head == NULL)
        {
            cout << "First add President." << endl;
            return;
        }

        node *newNode = new node();

        newNode->PRN = prn;
        newNode->name = Name;
        newNode->next = NULL;

        tail->next = newNode;
        tail = newNode;
    }

    void delP()
    {
        if (head == NULL)
        {
            cout << "Club is empty." << endl;
            return;
        }

        node *temp = head;

        head = head->next;

        delete temp;

        if (head == NULL)
        {
            tail = NULL;
        }
    }

    void delS()
    {
        if (head == NULL)
        {
            cout << "Club is empty." << endl;
            return;
        }

        if (head == tail)
        {
            delete head;
            head = tail = NULL;
            return;
        }

        node *temp = head;

        while (temp->next != tail)
        {
            temp = temp->next;
        }

        delete tail;

        tail = temp;
        tail->next = NULL;
    }

    void delM(int prn)
    {
        if (head == NULL)
        {
            cout << "Club is empty." << endl;
            return;
        }

        if (head->PRN == prn)
        {
            delP();
            return;
        }

        if (tail->PRN == prn)
        {
            delS();
            return;
        }

        node *temp = head;

        while (temp->next != NULL &&
               temp->next->PRN != prn)
        {
            temp = temp->next;
        }

        if (temp->next == NULL)
        {
            cout << "Member not found." << endl;
            return;
        }

        node *temp1 = temp->next;

        temp->next = temp->next->next;

        delete temp1;

        cout << "Member deleted." << endl;
    }

    void count()
    {
        node *temp = head;
        int count = 0;

        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }

        cout << "Total No of Members are: "
             << count << endl;
    }

    void diplay()
    {
        if (head == NULL)
        {
            cout << "Club not created." << endl;
            return;
        }

        node *temp = head;

        while (temp != NULL)
        {
            if (temp == head)
            {
                cout << "President: ";
            }
            else if (temp == tail)
            {
                cout << "Secretary: ";
            }
            else
            {
                cout << "Member: ";
            }

            cout << temp->PRN << " ";
            cout << temp->name << " -> ";

            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    void concat(List &B)
    {
        if (B.head == NULL)
        {
            cout << "Division B is empty." << endl;
            return;
        }

        if (head == NULL)
        {
            head = B.head;
            tail = B.tail;
        }
        else
        {
            tail->next = B.head;
            tail = B.tail;
        }

        cout << "Lists concatenated successfully." << endl;
    }
};

int main()
{
    List A, B;

    int choice, div, type;
    int prn, n;
    string name;

    do
    {
        cout << "\n========== PINNACLE CLUB ==========" << endl;
        cout << "1. Add" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Display" << endl;
        cout << "4. Count" << endl;
        cout << "5. Concatenate A + B" << endl;
        cout << "6. Display Both" << endl;
        cout << "7. Clear" << endl;
        cout << "8. Exit" << endl;
        cout << "===================================" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "\n1. Division A" << endl;
            cout << "2. Division B" << endl;
            cout << "Enter division: ";
            cin >> div;

            cout << "\n1. President" << endl;
            cout << "2. Member" << endl;
            cout << "3. Secretary" << endl;
            cout << "Enter type: ";
            cin >> type;

            if (type == 2)
            {
                cout << "How many members: ";
                cin >> n;

                for (int i = 0; i < n; i++)
                {
                    cout << "\nEnter PRN: ";
                    cin >> prn;

                    cout << "Enter Name: ";
                    cin >> name;

                    if (div == 1)
                        A.addM(prn, name);
                    else
                        B.addM(prn, name);
                }
            }
            else
            {
                cout << "Enter PRN: ";
                cin >> prn;

                cout << "Enter Name: ";
                cin >> name;

                if (div == 1)
                {
                    if (type == 1)
                        A.addP(prn, name);
                    else
                        A.addS(prn, name);
                }
                else
                {
                    if (type == 1)
                        B.addP(prn, name);
                    else
                        B.addS(prn, name);
                }
            }

            break;
        }

        case 2:
        {
            cout << "\n1. Division A" << endl;
            cout << "2. Division B" << endl;
            cout << "Enter division: ";
            cin >> div;

            cout << "\n1. President" << endl;
            cout << "2. Member" << endl;
            cout << "3. Secretary" << endl;
            cout << "Enter type: ";
            cin >> type;

            if (div == 1)
            {
                if (type == 1)
                {
                    A.delP();
                }
                else if (type == 2)
                {
                    cout << "Enter PRN: ";
                    cin >> prn;
                    A.delM(prn);
                }
                else
                {
                    A.delS();
                }
            }
            else
            {
                if (type == 1)
                {
                    B.delP();
                }
                else if (type == 2)
                {
                    cout << "Enter PRN: ";
                    cin >> prn;
                    B.delM(prn);
                }
                else
                {
                    B.delS();
                }
            }

            break;
        }

        case 3:
        {
            cout << "\n1. Division A" << endl;
            cout << "2. Division B" << endl;
            cout << "Enter division: ";
            cin >> div;

            if (div == 1)
                A.diplay();
            else
                B.diplay();

            break;
        }

        case 4:
        {
            cout << "\n1. Division A" << endl;
            cout << "2. Division B" << endl;
            cout << "Enter division: ";
            cin >> div;

            if (div == 1)
                A.count();
            else
                B.count();

            break;
        }

        case 5:
        {
            A.concat(B);

            cout << "\nAfter Concatenation:" << endl;
            A.diplay();

            break;
        }

        case 6:
        {
            cout << "\n--- Division A ---" << endl;
            A.diplay();

            cout << "\n--- Division B ---" << endl;
            B.diplay();

            break;
        }

        case 7:
        {
            A.head = A.tail = NULL;
            B.head = B.tail = NULL;

            cout << "Both divisions cleared." << endl;

            break;
        }

        case 8:
        {
            cout << "Program ended." << endl;
            break;
        }

        default:
        {
            cout << "Invalid choice." << endl;
        }
        }

    } while (choice != 8);

    return 0;
}
