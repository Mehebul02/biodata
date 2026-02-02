#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
    float num1, num2;

    cout << "Enter two numbers";
    cin >> num1 >> num2;

    cout << showpoint;
    cout << fixed;

    float sum = num1 + num2;

    cout << setw(15) << "The sum is :" << sum;
    cout << endl;

    float sub = num1 - num2;
    cout << setw(15) << "The subsection is a :" << sub;
    cout << endl;

    cout << noshowpoint;

    float multi = num1 * num2;
    cout << setw(15) << "Multiplication is a : " << multi;
    cout << endl;

    double division = (float)num1 / num2;
    cout << setw(15) << "Division is a :" << division;
    cout << endl;

    //  int modulus = num1 % num2 ;
    //  cout << "Modulus is a:" << modulus;
    //  cout << endl;

    getch();
}