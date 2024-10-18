#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter no of steps" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            for (j = 0; j < n; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (j = 0; j < n; j++)
            {
                cout << " ";
            }
            cout << " * ";
        }
        cout << endl;
    }
}
