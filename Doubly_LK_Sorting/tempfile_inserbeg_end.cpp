#include <stdio.h>
#include <iostream>
using namespace std;
template <typename type>
class linkedlist
{
    struct node
    {
        node *next;
        type data;
        node *prev;
    };
    node *begin = NULL, *end = NULL;

public:
    void insertbeg(type input)
    {
        node *temp = new node;
        temp->next = NULL;
        temp->prev = NULL;
        temp->data = input;
        if (begin != NULL)
        {
            temp->next = begin;
            begin->prev = temp;
        }
        else
            end = temp;
        begin = temp;
    }
    void insertend(type input)
    {
        node *temp = new node;
        temp->next = NULL;
        temp->prev = NULL;
        temp->data = input;
        if (end != NULL)
        {
            end->next = temp;
            temp->prev = end;
        }
        else
            begin = temp;
        end = temp;
    }

    void traversebeg()
    {

        if (begin == NULL)
            cout << "Empty..." << endl;
        else
        {
            node *ptr = begin;
            while (ptr != NULL)
            {
                cout << "\t" << ptr->data;
                ptr = ptr->next;
            }
        }
    }
    void traversend()
    {

        if (end == NULL)
            cout << "Empty..." << endl;
        else
        {
            node *ptr = end;
            while (ptr != NULL)
            {
                cout << "\t" << ptr->data;
                ptr = ptr->prev;
            }
        }
    }
};

int main()
{
    system("cls");
    linkedlist<int> obj;
    int val, ch;
    while (true)
    {
        cout << "\n\nLinked List (1. insertBeg 2.insertEnd 3.unavailable 4.exit) : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n\tEnter integer : ";
            cin >> val;
            obj.insertbeg(val);
            break;
        case 2:
            cout << "\n\tEnter integer : ";
            cin >> val;
            obj.insertend(val);
            break;
        // case 3:
        case 3:
            exit(0);
        }
        cout << "From the begining Node :\n";
        obj.traversebeg();
        cout << "\nFrom the Last Node :\n";
        obj.traversend();
    }
}
