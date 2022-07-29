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

    int counter = 1;

    while(counter < s){
        for(int i = 0; i < s-counter; i++){
            if(array[i] > array[i+1]){
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
        counter++;
    }

    cout<<"The sorted array is [ ";

    for(int i = 0; i < s; i++){
        cout<<array[i]<<" ";
    }

    cout<<"]";

    cout<<endl;
    
    return 0;

}