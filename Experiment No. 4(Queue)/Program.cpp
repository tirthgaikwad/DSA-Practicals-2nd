
#include <iostream>
#include <string>
using namespace std;

struct Node {
    string order;
    Node* next;
};

class PizzaParlor {
    Node* front;
    Node* rear;
    int count;
    int M;

public:
    PizzaParlor(int maxOrders) {
        front = rear = nullptr;
        count = 0;
        M = maxOrders;
    }

    void enqueue(string order) {
        if (count == M) {
            cout << "Queue is full! Cannot accept more orders.\n";
            return;
        }

        Node* newNode = new Node;
        newNode->order = order;
        newNode->next = nullptr;

        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        count++;
        cout << "Order added successfully.\n";
    }

    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty! No orders to serve.\n";
            return;
        }

        Node* temp = front;
        cout << "Serving order: " << temp->order << endl;

        front = front->next;

        if (front == nullptr) {
            rear = nullptr;
        }

        delete temp;
        count--;
    }

    void display() {
        if (front == nullptr) {
            cout << "No pending orders.\n";
            return;
        }

        Node* temp = front;
        cout << "Current orders (Front to Rear):\n";

        while (temp != nullptr) {
            cout << temp->order << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
        cout << "Orders in queue: " << count << "/" << M << endl;
    }

    ~PizzaParlor() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }
};

int main() {
    int M, choice;
    string order;

    cout << "Enter maximum number of orders: ";
    cin >> M;

    if (M <= 0) {
        cout << "Maximum orders must be greater than zero.\n";
        return 0;
    }

    cin.ignore();

    PizzaParlor p(M);

    do {
        cout << "\n--- PIZZA PARLOR QUEUE ---\n";
        cout << "1. Add Order\n";
        cout << "2. Serve Order\n";
        cout << "3. Display Orders\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter order name: ";
                getline(cin, order);
                p.enqueue(order);
                break;

            case 2:
                p.dequeue();
                break;

            case 3:
                p.display();
                break;

            case 4:
                cout << "Exiting Pizza Parlor Queue.\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
