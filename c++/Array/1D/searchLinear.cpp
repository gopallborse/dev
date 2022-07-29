#include <iostream>
using namespace std;

int linearSearch(int array[], int s, int k){
    for(int i = 0; i < s; i++){
        if(array[i]==k){
            return i;
        }
    }
    return -1;
}

int main(){

    cout<<"Enter the size of the array: ";
    int s;
    cin>>s;

    int array[s];

    cout<<"Enter the elements of the array: ";

    for(int i = 0; i < s; i++){
        cin>>array[i];
    }

    cout<<"Enter the number you want to search in the array: ";
    int k;
    cin>>k;

    cout<<"The number "<<k<<" is located at position "<<linearSearch(array, s, k)<<" in the array."<<endl;
    
    return 0;

}