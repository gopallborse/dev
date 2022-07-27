#include <iostream>
using namespace std;

int main()
{

    cout << "Enter the number of stars at start: ";
    int star;
    cin >> star;

    for (int i = star; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}