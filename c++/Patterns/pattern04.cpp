#include <iostream>
using namespace std;

int main()
{

    cout << "Enter the number of stars at end: ";
    int star;
    cin >> star;

    for (int i = 1; i <= star; i++)
    {
        for (int j = 1; j <= star; j++){
            if (j <= star-i){
                cout<<"  ";
            } else {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}