#include <iostream>
using namespace std;

int fact(int n){
    int factorial = 1;
    for(int i = 2; i <= n; i++){
        factorial *= i; 
    }
    return factorial;
}

int main()
{

    cout << "Enter the number you want Factorial of: ";
    int n;
    cin >> n;

    cout<<"The factorial of "<<n<<" is "<<fact(n)<<endl;

}