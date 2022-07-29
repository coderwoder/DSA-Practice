#include <iostream>
#include <climits>
using namespace std;
class interface
{
    int n, arr[100];

public:
    void getinfo()
    {
        cout << "Enter the Number of elements";
        cin >> n;
        cout << "Enter " << n << " Number of elements ";
        for (int i = 1; i <= n; i++)
        {
            cout << "input number #" << i << " followed by enter:" << endl;
            cin >> arr[i - 1];
        }
    }
    void display()
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << "\t";
        }
    }
};

int main()
{
    interface obj1;
    obj1.getinfo();
    obj1.display();
}
