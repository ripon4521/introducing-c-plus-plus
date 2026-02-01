#include <iostream>
using namespace std;

int main()
{
    cout << "\n\nThe perfect numbers between 1 to 500 are:" << endl;
    for (int num = 1; num <= 50; num++)
    {
        int sum_of_divisors = 0;
        for (int i = 1; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                sum_of_divisors += i;
            }
        }

        if (sum_of_divisors == num)
        {
            cout << num << " ";
        }
    }
}