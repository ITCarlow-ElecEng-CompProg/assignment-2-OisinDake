//Factorial calculator
//Lab 2
//Oisin Dake
#include <iostream>

using namespace std;

int main()
{
    long int n, factorial = 1;

    cout << "Factorial Calculator!\n\n" << endl; //diplay

    do
    {
        cout << "Enter a positive value: ";// //do while loop
        cin >> n;
    }
    while (n <= 0);

    for(int i = 1; i <=n; ++i) // for loop
    {
        factorial *= i;
    }
    cout << "Factorial of " << n << " = " << factorial;// display
    return 0;
}




