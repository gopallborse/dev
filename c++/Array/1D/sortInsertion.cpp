#include <iostream>
using namespace std;

int main(){

    cout<<"Enter the size of the array: ";
    int s;
    cin>>s;

    int array[s];

    cout<<"Enter the elements of the array: ";

    for(int i = 0; i < s; i++){
        cin>>array[i];
    }

    for(int i = 1; i < s; i++){
        int current = array[i];
        int j = i-1;
        while(array[j] > current && j >= 0){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = current;
    }

    cout<<"The sorted array is [ ";

    for(int i = 0; i < s; i++){
        cout<<array[i]<<" ";
    }

    cout<<"]";

    cout<<endl;
    
    return 0;

}