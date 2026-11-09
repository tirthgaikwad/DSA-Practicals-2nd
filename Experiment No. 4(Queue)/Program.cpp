#include <iostream>
using namespace std;
#define SIZE 5
int queue[SIZE];
int f = 0;
int r = -1;
void insert()
{
    int order;
    if (r == SIZE - 1)
    {
        cout << "ORDER IS FULL\n";
    }
    else
    {
        cout << "ENTER order NUM: ";
        cin >> order;
        r++;
        queue[r] = order;

        cout << "order added SUsufilly!\n";
    }
}
void deldeteor()
{
    if (f > r || f == -1)
    {
        cout << "Queue is Empty\n";
    }
    else
    {
        cout << "Order served: " << queue[f] << endl;
        f++;
        if (f > r)
        {
            f = r = -1;
        }
    }
}
void display()
{
    if (f == -1)
    {
        cout << "ON order AVailable\n";
    }
    else
    {
        cout << "Pending Orders: ";
        for (int i = f; i <= r; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int choice;

    do
    {
        cout << "\n--- PIZZA PARLOR ---\n";
        cout << "1. Add Order\n";
        cout << "2. Delete Order\n";
        cout << "3. Display Orders\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            insert();
            break;

        case 2:
            deldeteor();
            break;

        case 3:
            display();
            break;

        case 4:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}
