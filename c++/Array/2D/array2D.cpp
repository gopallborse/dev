#include <iostream>
using namespace std;

int main(){

    cout<<"Enter the dimensions of the array: ";
    int n, m;
    cin>>n>>m;
    
    int arr[n][m];
    
    cout<<"Enter the elements of the array"<<endl;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
        cin>>arr[i][j];
        }
    }

    cout<<"The matrix is: "<<endl;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}