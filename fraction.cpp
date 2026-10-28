
#include "fraction.h"

// Default constructor
Fraction::Fraction() {
    numerator = 0;
    denominator = 1;
}

// Parameterized constructor
Fraction::Fraction(int n, int d) {
    set(n, d);
}

// Copy constructor
Fraction::Fraction(const Fraction& other) {
    numerator = other.numerator;
    denominator = other.denominator;
}

// Destructor
Fraction::~Fraction() {
    // Object destroy hone par call hota hai.
}

// Set function
void Fraction::set(int n, int d) {
    if (d == 0) {
        cout << "Denominator cannot be zero!\n";
        numerator = 0;
        denominator = 1;
    }
    else {
        numerator = n;
        denominator = d;

        // Denominator ko positive rakhna
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }
}

// Get functions
int Fraction::getNumerator() {
    return numerator;
}

int Fraction::getDenominator() {
    return denominator;
}

// Assignment operator
Fraction& Fraction::operator=(const Fraction& other) {
    if (this != &other) {
        numerator = other.numerator;
        denominator = other.denominator;
    }

    return *this;
}

// Addition
Fraction Fraction::operator+(const Fraction& other) {
    int n = numerator * other.denominator
          + other.numerator * denominator;

    int d = denominator * other.denominator;

    return Fraction(n, d);
}

// Subtraction
Fraction Fraction::operator-(const Fraction& other) {
    int n = numerator * other.denominator
          - other.numerator * denominator;

    int d = denominator * other.denominator;

    return Fraction(n, d);
}

// Multiplication
Fraction Fraction::operator*(const Fraction& other) {
    int n = numerator * other.numerator;
    int d = denominator * other.denominator;

    return Fraction(n, d);
}

// Division
Fraction Fraction::operator/(const Fraction& other) {
    if (other.numerator == 0) {
        cout << "Cannot divide by zero fraction!\n";
        return Fraction();
    }

    int n = numerator * other.denominator;
    int d = denominator * other.numerator;

    return Fraction(n, d);
}

// Greater than
bool Fraction::operator>(const Fraction& other) {
    return numerator * other.denominator
         > other.numerator * denominator;
}

// Less than
bool Fraction::operator<(const Fraction& other) {
    return numerator * other.denominator
         < other.numerator * denominator;
}

// Greater than or equal to
bool Fraction::operator>=(const Fraction& other) {
    return numerator * other.denominator
         >= other.numerator * denominator;
}

// Less than or equal to
bool Fraction::operator<=(const Fraction& other) {
    return numerator * other.denominator
         <= other.numerator * denominator;
}

// Equal to
bool Fraction::operator==(const Fraction& other) {
    return numerator * other.denominator
         == other.numerator * denominator;
}

// Not equal to
bool Fraction::operator!=(const Fraction& other) {
    return !(*this == other);
}

// Prefix increment: ++f
Fraction& Fraction::operator++() {
    numerator = numerator + denominator;
    return *this;
}

// Postfix increment: f++
Fraction Fraction::operator++(int) {
    Fraction oldValue(*this);

    numerator = numerator + denominator;

    return oldValue;
}

// Input operator
istream& operator>>(istream& in, Fraction& f) {
    int n, d;

    cout << "Enter numerator: ";
    in >> n;

    cout << "Enter denominator: ";
    in >> d;

    if (in) {
        f.set(n, d);
    }

    return in;
}

// Output operator
ostream& operator<<(ostream& out, Fraction& f) {
    out << f.numerator << "/" << f.denominator;
    return out;
}
