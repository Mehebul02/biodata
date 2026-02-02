#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
    int num1 , num2;
     num1 = 10;
     num2 = 22;

     int sum = num1 + num2;
     cout << "The sum is :" << sum;
     cout << endl;

     int sub = num1 - num2;
     cout << "The subsection is a :" << sub;
     cout << endl;

     int multi = num1 * num2;
     cout << "Multiplication is a : " << multi;
     cout << endl;

     int division = num1 / num2;
     cout << "Division is a :" << division;
     cout << endl;

     int modulus = num1 % num2 ;
     cout << "Modulus is a:" << modulus;
     cout << endl;
     
     getch();
}