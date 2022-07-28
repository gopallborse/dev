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

    for(int i = 0; i < s-1; i++){
        for(int j = i+1; j < s; j++){
            if(array[j] < array[i]){
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }

    cout<<"The sorted array is [";

    for(int i = 0; i < s; i++){
        cout<<array[i]<<" ";
    }

    cout<<"]";

    cout<<endl;
    
    return 0;

}