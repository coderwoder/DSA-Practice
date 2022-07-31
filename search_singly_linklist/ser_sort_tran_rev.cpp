#include <iostream>
#include <climits>
#include <bits/stdc++.h>
using namespace std;
int display(int arr[], int n);
int search(int arr[], int n, int index);
int sort(int arr[], int n);
int main()
{
    int arr[] = {1, 21, 3, 12, 41, 89, 17, 11, 1};
    int arrlen = sizeof(arr) / sizeof(arr[0]), index;
    // function for displaying the array
    display(arr, arrlen);
    // searching the desired index of the input
    cout << "Enter the Number you want to find in this list of array" << endl;
    cin >> index;
    int ser_res = search(arr, arrlen, index);
    (ser_res == -1) ? cout << "Error no such number exists in this array" << endl : cout << "Found at index : " << ser_res << endl;
    // Sorting the elements by sort() and display()
    sort(arr, arrlen);
    display(arr, arrlen);
    return 0;
}
int display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%u-", arr[i]);
    cout << endl;
}
int search(int arr[], int n, int index)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == index)
            return i;
    }
    return -1;
}
int sort(int arr[], int n)
{
    sort(arr, arr + n);
}
