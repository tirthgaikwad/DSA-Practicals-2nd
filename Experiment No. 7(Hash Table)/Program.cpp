#include <iostream>
using namespace std;
#define SIZE 10
struct client
{
    string name;
    long long phone;
};
client table[SIZE];
int HashFun(string name)
{
    int sum = 0;
    for (int i = 0; i < name.size(); i++)
    {
        sum = sum + name[i];
    }
    return sum % SIZE;
}
void LinearProb(string name, long long phone)
{
    int index = HashFun(name);
    for (int i = 0; i < SIZE; i++)
    {
        int pos = (index + i) % SIZE;

        if (table[pos].name == "")
        {
            table[pos].name = name;
            table[pos].phone = phone;

            cout << "Client added successfully!\n";
            return;
        }
    }
    cout << "HashTable is Full\n";
}
void QudradicPro(string name, long long phone)
{
    int index = HashFun(name);
    for (int i = 0; i < SIZE; i++)
    {
        int pos = (index + i * i) % SIZE;
        if (table[pos].name == "")
        {
            table[pos].name = name;
            table[pos].phone = phone;
            cout << "Client added successfully!\n";
            return;
        }
    }
    cout << "HashTable is Full\n";
}
void display()
{
    cout << "\nTelephone Book:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << i << ":";
        if (table[i].name == "")
        {
            cout << "Empty";
        }
        else
        {
            cout << table[i].name << " - " << table[i].phone;
        }
        cout << endl;
    }
}
void search(string name)
{
    int index = HashFun(name);
    for (int i = 0; i < SIZE; i++)
    {
        int pos = (index + i) % SIZE;
        if (table[pos].name == name)
        {
            cout << "Phone Number: " << table[pos].phone << endl;
            return;
        }
    }
    cout << "NOT FOUND";
}

int main()
{
    string name;
    long long phone;
    int choice;
    do
    {
        cout << "\n--- TELEPHONE BOOK ---\n";
        cout << "1. Linear Probing\n";
        cout << "2. Quradic Probing\n";
        cout << "3. Search\n";
        cout << "4. Display\n";
        cout << "5. EXIST\n";
        cout << "ENTER A CHOICE: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter a name: ";
            cin >> name;
            cout << "Enter a phone No: ";
            cin >> phone;
            LinearProb(name, phone);
            break;
        case 2:
            cout << "Enter a name: ";
            cin >> name;
            cout << "Enter a phone No: ";
            cin >> phone;
            QudradicPro(name, phone);
            break;
        case 3:
            cout << "Enter a name of person that you have to find in Telophone Book: ";
            cin >> name;
            search(name);
            break;
        case 4:
            display();
            break;
        case 5:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invaild choice\n";
        }
    } while (choice != 5);

    return 0;
}
