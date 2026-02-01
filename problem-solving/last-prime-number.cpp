// #include<iostream>
// using namespace std;

// int main () {
//     int num;
//     cout << "\nEnter a positive number:";
//     cin >> num;
//     bool prime = true;

//     if ( num < 2)
//     {
//         prime == false;
//     }

//     for (int i = 2; i < num; i++){
//         if (num % i == 0)
//         {
//             prime=false;
//             break;
//         }
        
//     }
//     if (prime)
//     {
//     cout << "This is prime number: " << num;
//     }else {
//         cout << "This is not prime number: " << num;
//     }
    
//     return 0;
    
// }

// last prime number 

#include<iostream>
using namespace std;

int main (){
    int number;
    cout << "Enter a positive number : ";
    cin >> number;

    for (int i = 2 ; i <= number ; i++){
        bool prime = true;

        for ( int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
            
        }
        
        if (prime)
        {
            cout << "Prime " << i;
            break;
        } 
        
    }



}