#include <iostream>
#include <stdlib.h>
using namespace std;
class linkedlist
{
    struct Node
    {
        int data; // data | value
        Node *next;
    };
    Node *begin = NULL; // cur List is empty
public:
    void insertbeg(int input)
    {
        Node *temp = new Node; // new node creating
        temp->data = input;    // val(input) stored in the data of temp
        temp->next = NULL;     // initialized next to null
        if (begin != NULL)
            temp->next = begin;
        begin = temp;
    }
    void display()
    {
        if (begin == NULL)
            cout << "Empty..." << endl;
        else
        {
            Node *ptr = begin;
            cout << "Displaying List : " << endl;
            while (ptr != NULL)
            {
                cout << "\t" << ptr->data;
                ptr = ptr->next;
            }
        }
    }
};
int main()
{
    system("cls");
    int input;
    linkedlist obj;
label:
    cout << "Enter the Number you want to enter in the linked list";
    cin >> input;
    obj.insertbeg(input);
    obj.display();
    char ch;
    cout << "\nWould you like to add more?(Y/N)\n";
    cin >> ch;
    if (ch == 'Y' || ch == 'y')
        goto label;
    return 0;
}