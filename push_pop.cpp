#include<iostream>
using namespace std;

int main () {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello, " << name << "!" << endl;
    name.push_back('a');
    cout << "After push_back: " << name << endl;
    name.pop_back();
    cout << "After pop_back: " << name << endl;
    return 0;
}