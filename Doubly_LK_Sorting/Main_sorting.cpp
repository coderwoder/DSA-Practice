#include <stdio.h>
#include <iostream>
using namespace std;
template <typename type>
class linkedlist
{
    struct node
    {
        node *next; // adrs of the next node
        type data;
        node *prev; // adrs of the prev node
    };
    node *begin = NULL, // initializing values
        *end = NULL;    // initializing values

public:
    void insertbeg(type input)
    {
        node *temp = new node;
        temp->next = NULL;
        temp->prev = NULL;
        temp->data = input;
        if (begin != NULL) // if the list has nodes
        {
            temp->next = begin; // right should point to 1st node
            begin->prev = temp; // 1st node ka left should point to temp
        }
        else
            end = temp; // if the list doesnt have node make it the 1st n last
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
            end->next = temp; // last node ka right should point to temp
            temp->prev = end; // temp ka left should point to last node
        }
        else
            begin = temp; // if the list doesnt have nodes make it the last n 1st
        end = temp;       // end should point the temp coz it's the last now
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
    void sortteddoubly()
    {
        node *ptr1 = begin, *ptr2;
        type tmp;
        while (ptr1 != NULL)
        {
            ptr2 = ptr1->next; // ptr2 ko ptr1 ke next node pe lagado
            while (ptr2 != NULL)
            {
                if (ptr1->data > ptr2->data) // bubble sorting
                {
                    tmp = ptr1->data;
                    ptr1->data = ptr2->data;
                    ptr2->data = tmp;
                }
                ptr2 = ptr2->next;
            }
            ptr1 = ptr1->next;
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
        cout << "\n\nLinked List (1. insertBeg 2.insertEnd 3.Sorting 4.exit) : ";
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
        case 3:
            cout << "The sorted Doubly is here\n";
            obj.sortteddoubly();
            obj.traversebeg();
        case 4:
            exit(0);
        }
        cout << "From the begining Node :\n";
        obj.traversebeg();
        cout << "\nFrom the Last Node :\n";
        obj.traversend();
    }
}
