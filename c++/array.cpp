#include <iostream>
using namespace std;

int main(){

    cout<<"Enter the size of the array: ";
    int s;
    cin>>s;
    
    int arr[s];
    
    cout<<"Enter the elements of the array"<<endl;
    
    for(int i = 0; i < s; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < s; i++){
        cout<<arr[i]<<" ";
    }
    
}