#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int* aptr = &a;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;

    *aptr = 20;
    cout<<a<<endl;

    int arr[] = {10, 20, 30};
    cout<<*arr<<endl;

    int* ptr = arr;
    for(int i = 0; i < 3; i++){
        cout<<*ptr<<endl;
        cout<<*(arr+i)<<endl;
        ptr++;
    }

    //Pointer to Pointer
    int** q = &aptr;
    cout<<*q<<endl;
    cout<<**q<<endl;

    return 0;
}