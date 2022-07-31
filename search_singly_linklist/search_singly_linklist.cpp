#include <iostream>
#include <stdlib.h>
using namespace std;
template <typename type>
class LinkedList
{
    struct Node
    {
        type data;
        Node *next;
    };
    Node *begin = NULL;

public:
    void traverse()
    {
        if (begin == NULL)
            cout << "Empty..." << endl;
        else
        {
            Node *ptr = begin;
            cout << "\nList : ";
            while (ptr != NULL)
            {
                cout << "\t" << ptr->data;
                ptr = ptr->next;
            }
        }
    }
    void insertBeg(type input)
    {
        Node *tmp = new Node;
        tmp->data = input;
        tmp->next = NULL;
        if (begin != NULL)
            tmp->next = begin;
        begin = tmp;
    }
    void insertEnd(type input)
    {
        Node *tmp = new Node;
        Node *ptr = begin;
        tmp->data = input;
        tmp->next = NULL;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = tmp;
    }
    void search(type val)
    {
        if (begin == NULL)
        {
            cout << "Empty List...." << endl;
        }
        else
        {
            int flag = 0;
            Node *ptr = begin;
            while (ptr != NULL)
            {
                if (ptr->data == val)
                {
                    cout << "The Address of " << val << " is " << ptr << endl;
                    flag = 1;
                }
                ptr = ptr->next;
                if (flag != 1)
                    cout << "Not present in the List";
            }
        }
    }
};
int main()
{
    system("cls");
    LinkedList<int> obj;
    int val, ch;
    while (true)
    {
        cout << "\n\nLinked List (1. insertBeg 2.insertEnd 3.search 4.exit) : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n\tEnter integer : ";
            cin >> val;
            obj.insertBeg(val);
            break;
        case 2:
            cout << "\n\tEnter integer : ";
            cin >> val;
            obj.insertEnd(val);
            break;
        case 3:
            cout << "\n\tEnter integer to search : ";
            cin >> val;
            obj.search(val);
            break;
        case 4:
            exit(0);
        }
        obj.traverse();
    }
}
