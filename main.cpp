
#include <iostream>
#include "fraction.h"
using namespace std;

int main() {
    Fraction f1, f2,f3;

    // Input
    cout << "First fraction:\n";
    cin >> f1;

    cout << "\nSecond fraction:\n";
    cin >> f2;

    // Output
    cout << "\nFirst fraction = " << f1 << endl;
    cout << "Second fraction = " << f2 << endl;

    // Get functions
    cout << "\nFirst numerator = "
         << f1.getNumerator() << endl;

    cout << "First denominator = "
         << f1.getDenominator() << endl;

    // Arithmetic operations
    f3=f1+f2;
    cout << f3 << endl;
    f3=f1-f2;
    cout << f3<< endl;
    f3=f1*f2;
    cout << f3<< endl;
    f3=f1/f2;
    cout <<f3<< endl;

    // Comparison operations
    cout << "\nFirst > Second: " << (f1 > f2) << endl;
    cout << "First < Second: " << (f1 < f2) << endl;
    cout << "First >= Second: " << (f1 >= f2) << endl;
    cout << "First <= Second: " << (f1 <= f2) << endl;
    cout << "First == Second: " << (f1 == f2) << endl;
    cout << "First != Second: " << (f1 != f2) << endl;

    // Copy constructor
    Fraction f7(f1);
    cout << "\nCopy of first fraction = " << f7 << endl;

    // Assignment operator
    Fraction f4;
    f4 = f2;
    cout << "Assigned fraction = " << f4 << endl;

    // Prefix increment
    cout << "\nPrefix result = " << ++f1 << endl;
    cout << "First fraction now = " << f1 << endl;

    // Postfix increment
    f2++;
    cout<<f2 << endl;


    // Set function
    Fraction f5;
    f5.set(3, 4);
    cout << "\nFraction after set = " << f5 << endl;

    return 0;
}
