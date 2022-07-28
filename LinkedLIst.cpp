#include <iostream>
#include <climits>
using namespace std;
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}

int main()
{
    int n, arr[100];
    cout << "Enter the Number of elements";
    cin >> n;
    cout << "Enter " << n << " Number of elements ";
    for (int i = 1; i <= n; i++)
    {
        cout << "input number #" << i << " followed by enter:" << endl;
        cin >> arr[i - 1];
    }
    display(arr, n);
}
