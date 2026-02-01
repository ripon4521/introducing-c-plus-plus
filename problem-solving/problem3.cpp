#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;

    cout << "\n\nInput a number of terms: \n";
    cin >> num;
    cout << "The natural numbers upto " << num << "th terms are: \n";
    for (int i = 1; i <= num; ++i)
    {
        cout << i << "  ";
        sum += i;
    }
    cout << " \n\nThe sum of the natural numbers is: " << sum << endl;
    return 0;
}