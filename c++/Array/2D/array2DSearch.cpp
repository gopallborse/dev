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

    cout<<"Enter the key you want to search in the array: ";
    int k;
    cin>>k;

    bool flag = false;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == k){
                flag = true;
                cout<<"The number "<<k<<" is found at position "<<i<<" X "<<j<<" in the array."<<endl;
            }
        }
    }

    if (flag == false){
        cout<<"The number "<<k<<" is not found in the array.";
    } 
}