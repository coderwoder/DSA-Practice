#include <iostream>
#include <stdlib.h>
using namespace std;
class linkedlist
{
    struct Node
    {
        int data;   //          // data | value
        Node *next; //          // address of the next node
    };
    Node *begin = NULL; //      // cur List is empty
public:
    void insertbeg(int input)
    {
        Node *temp = new Node;  // new node creating
        temp->data = input;     // val(input) stored in the data of temp
        temp->next = NULL;      // initialized next to null
        if (begin != NULL)      // list not empty
            temp->next = begin; // first node ko point karo(connecting new to 1)
        begin = temp;           //        //begin ko point karwake isko first node banado
    }
    void display() //           // displaying while you traverse
    {
        if (begin == NULL)
            cout << "Empty..." << endl;
        else
        {
            Node *ptr = begin; //          //starting the traverse from begin
            cout << "Displaying List : " << endl;
            while (ptr != NULL) //         //jab tak ptr end node(adrs=null) tak nahi ata
            {
                cout << "\t" << ptr->data; // printing the data of the node that is pointed to
                ptr = ptr->next;           // point to the adrs of the next node
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
