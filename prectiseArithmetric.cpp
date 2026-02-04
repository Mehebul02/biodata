#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num1, num2;
    num1 = 10;
    num2 = 14;

    int sum = num1 + num2;
    cout << "The sum is a " << sum;
    cout << endl;

    int sub = num1 - num2;
    cout << "The subsection is a :" << sub;
    cout << endl;

    int multiplication = num1 * num2;
    cout << "The multiplication is a:" << multiplication;
    cout << endl;

    int division = num1 / num2;
    cout << "The division is a:" << division;
    cout << endl;

    int modulus = num1 % num2;
    cout << "The modulus is a:" << modulus;
    cout << endl;

    getch();
}

// g++ prectiseArithmetric.cpp -o prectiseArithmetric && ./prectiseArithmetric