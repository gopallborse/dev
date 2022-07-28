#include <iostream>
#include <climits>
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

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for(int i = 0; i < s; i++){
        maxNo = max(maxNo,arr[i]);
        minNo = min(minNo,arr[i]);
        
    }
    
    cout<<"The max no is "<<maxNo<<" and the min no is "<<minNo<<endl;
    
}