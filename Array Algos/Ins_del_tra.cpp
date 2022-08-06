#include <iostream>
#include <stdio.h>
using namespace std;

void ins(int lim, int arr[]);
void del(int lim, int arr[]);
void tra(int lim, int arr[]);

int main()
{
    int lim;
    int *arr;
    cout << "Enter the number of elements you want in your array" << endl;
    cin >> lim;
    cout << "Enter your elements" << endl;
    int i = 0;
    while (i < lim)
    {
        cin >> arr[i];
        i++;
    }
    tra(lim, arr);
    ins(lim, arr);
}

void ins(int lim, int arr[])
{

    int num, index, i;
    cout << endl
         << "Enter The element you want in to add in your array :" << endl;
    cin >> num;
    cout << "At index? :" << endl;
    for (i = 0; i < lim; i++)
        cout << i << "\t";
    cout << endl;
    cin >> index;

    for (i = lim; i >= index; i--)
        arr[i + 1] = arr[i];

    arr[index] = num;
    lim = lim + 1;
    tra(lim, arr);
}

void tra(int lim, int arr[])
{
    // system("cls");
    cout << "Your array" << endl;
    int i = 0;
    while (i < lim)
    {
        cout << arr[i] << "\t";
        i++;
    }
}

void del()
{
}
