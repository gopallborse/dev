#include <iostream>
using namespace std;

int main()
{

    cout << "Enter the number: ";
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int x = 1; x <= i; x++){
            cout<<"* ";
        }

        int sp = 2*n-2*i;
        for (int y = 1; y <= sp; y++){
            cout<<"  ";
        }

        for (int z = 1; z <= i; z++){
            cout<<"* ";
        }
        cout<<endl;

    }

    for (int i = n; i >= 1; i--)
    {
        for (int x = 1; x <= i; x++){
            cout<<"* ";
        }

        int sp = 2*n-2*i;
        for (int y = 1; y <= sp; y++){
            cout<<"  ";
        }

        for (int z = 1; z <= i; z++){
            cout<<"* ";
        }
        cout<<endl;

    }

    return 0;
}