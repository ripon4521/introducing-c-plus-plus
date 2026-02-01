#include<iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cout << "  \n Find the first 10 natural numbers: \n";;
    cout << "-------------------------------------\n";
    cout << "The natural numbers are: \n";
    for(n=1; n<=10; n++){
        cout << n << "  ";
        sum += n;
    }
    cout << "\n\nThe Sum of first 10 natural numbers is: " << sum << endl;
    return 0;
}