#include<iostream>
using namespace std;

int main(){
    int num;
    int factorial = 1;
    cout << "\nInput a number to find the factorial: ";
    cin >> num;

    for(int i = 1; i <= num; i++ ){
        factorial = factorial * i ;
    }
    cout << "\nThe factorial of the given number is:" << factorial << endl;
    return 0;
}
