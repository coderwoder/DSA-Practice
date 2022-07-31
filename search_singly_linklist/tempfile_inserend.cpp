#include <iostream>
#include <stdlib.h>
using namespace std;
class linkedlist
{
    struct node
    {
        int data;
        node *next;
    };
    node *begin = NULL;

public:
    void insertend(int input)
    {
        node *ptr = begin;
        node *temp = new node;
        temp->data = input;
        temp->next = NULL;
        if (begin != NULL)
        {
            while (ptr->next != NULL)
            {
                ptr = ptr->next; // end tak jao
            }
            ptr->next = temp; // adrs of the last node jisko point kar raha tha
                              // usme ptr , temp ka adrs dal dega (joh null tha)
                              // toh ab temp ko last node point kar raha hai
                              // aur ab temp bangaya last
        }
        else
            begin = temp; // kyunki list empty hai toh isko 1st node banado
    }
    void display()
    {
        if (begin == NULL)
            cout << "Empty..." << endl;
        else
        {
            node *ptr = begin;
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
    obj.insertend(input);
    obj.display();
    char ch;
    cout << "\nWould you like to add more?(Y/N)\n";
    cin >> ch;
    if (ch == 'Y' || ch == 'y')
        goto label;
}
