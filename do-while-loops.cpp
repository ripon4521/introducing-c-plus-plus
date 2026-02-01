#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int i = 1;
    do {
        sum += i;
        i++;
    } while (i <= 2); 
    cout << "Final sum: " << sum << endl;
    return 0;
}