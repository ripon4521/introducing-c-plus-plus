#include<iostream>
using namespace std;

int main () {

    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int totalSum = 0;

    if (num2 < num1)
    {
        cout << "\n Please  provide the first number greater than the second number.";
        return 0;
    }
    

    for(int num = num1; num <= num2; num--)
    {
        if(num < 2) continue;
        bool isPrime = true;

        for(int i = 2; i*i <= num; i++)
        {
            if(num % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if(isPrime)
        {
            cout << num << " ";
            totalSum += num; 
        }
    }

    cout << "\nTotal Sum = " << totalSum;
}
