
#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node* next;
};

class LinkedList
{
private:
    Node* head;

public:
    LinkedList()
    {
        head = NULL;
    }

    // Insert at beginning
    void insertBeginning(int value)
    {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;

        cout << "Node inserted at beginning.\n";
    }

    // Insert at end
    void insertEnd(int value)
    {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            return;
        }

        Node* temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;

        cout << "Node inserted at end.\n";
    }

    // Insert at given position (1-based)
    void insertPosition(int value, int pos)
    {
        if (pos < 1)
        {
            cout << "Invalid position.\n";
            return;
        }

        if (pos == 1)
        {
            insertBeginning(value);
            return;
        }

        Node* temp = head;

        for (int i = 1; i < pos - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }

        if (temp == NULL)
        {
            cout << "Invalid position.\n";
            return;
        }

        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = temp->next;
        temp->next = newNode;

        cout << "Node inserted at position "
             << pos << ".\n";
    }

    // Delete from beginning
    void deleteBeginning()
    {
        if (head == NULL)
        {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;

        cout << "Node deleted from beginning.\n";
    }

    // Delete from end
    void deleteEnd()
    {
        if (head == NULL)
        {
            cout << "List is empty.\n";
            return;
        }

        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            cout << "Node deleted from end.\n";
            return;
        }

        Node* temp = head;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;

        cout << "Node deleted from end.\n";
    }

    // Delete from given position (1-based)
    void deletePosition(int pos)
    {
        if (head == NULL || pos < 1)
        {
            cout << "Invalid position or empty list.\n";
            return;
        }

        if (pos == 1)
        {
            deleteBeginning();
            return;
        }

        Node* temp = head;

        for (int i = 1; i < pos - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }

        if (temp == NULL || temp->next == NULL)
        {
            cout << "Invalid position.\n";
            return;
        }

        Node* del = temp->next;
        temp->next = del->next;
        delete del;

        cout << "Node deleted from position "
             << pos << ".\n";
    }

    // Display linked list
    void display()
    {
        if (head == NULL)
        {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = head;

        cout << "Linked List: ";

        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }

    // Destructor
    ~LinkedList()
    {
        while (head != NULL)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main()
{
    LinkedList list;
    int choice, value, pos;

    do
    {
        cout << "\n----- SINGLY LINKED LIST -----\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Given Position\n";
        cout << "4. Delete from Beginning\n";
        cout << "5. Delete from End\n";
        cout << "6. Delete from Given Position\n";
        cout << "7. Display\n";
        cout << "8. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                list.insertBeginning(value);
                break;

            case 2:
                cout << "Enter value: ";
                cin >> value;
                list.insertEnd(value);
                break;

            case 3:
                cout << "Enter value: ";
                cin >> value;
                cout << "Enter position: ";
                cin >> pos;
                list.insertPosition(value, pos);
                break;

            case 4:
                list.deleteBeginning();
                break;

            case 5:
                list.deleteEnd();
                break;

            case 6:
                cout << "Enter position: ";
                cin >> pos;
                list.deletePosition(pos);
                break;

            case 7:
                list.display();
                break;

            case 8:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 8);

    return 0;
}

