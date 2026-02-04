#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
    float num1, num2;

    cout << "Enter two integer Number: ";
    cin >> num1 >> num2;
    cout << showpoint;
    cout << fixed;

    float sum = num1 + num2;
    cout << setw(15) << "The sum is a " << sum;
    cout << endl;
    cout << noshowpoint;

    float sub = num1 - num2;
    cout << "The subsection is a :" << sub;
    cout << endl;

    float multiplication = num1 * num2;
    cout << "The multiplication is a:" << multiplication;
    cout << endl;

    float division = num1 / num2;
    cout << "The division is a:" << division;
    cout << endl;

    // double modulus = num1 % num2;
    // cout << "The modulus is a:" << modulus;
    // cout << endl;

    getch();
}

// g++ prectiseArithmetric.cpp -o prectiseArithmetric && ./prectiseArithmetric