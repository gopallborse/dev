#include <iostream>
using namespace std;

int main(){
    char arr[15] = "apple";
    
    int i = 0;

    while(arr[i] != '\0'){
        cout<<arr[i]<<endl;
        i++;
    }

    return 0;
}