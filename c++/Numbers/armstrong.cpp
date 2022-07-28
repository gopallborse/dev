#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    cout << "Enter the number you want to check if Armstrong: ";
    int n;
    cin >> n;

    int sum = 0;

    int original = n;

    while(n > 0){
        int lastdigit = n%10;
        sum += pow(lastdigit,3);
        n = n/10;
    }

    if (sum == original){
        cout<<"Armstrong Number"<<endl;
    }else{
        cout<<"Not an Armstrong Number"<<endl;
    }

    return 0;

}