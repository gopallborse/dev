#include <iostream>
using namespace std;

int binarySearch(int array[], int s, int k){
    int f=0;
    int l=s;

    while(f <= l){
        int m = (f+l)/2;
        if(array[m]==k){
            return m;
        }else if(array[m]>k){
            l = m - 1;
        }else{
            f = m + 1;
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

    cout<<"The number "<<k<<" is located at position "<<binarySearch(array, s, k)<<" in the array."<<endl;
    
    return 0;

}