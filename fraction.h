
#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Constructors
    Fraction();
    Fraction(int n, int d);
    Fraction(const Fraction& other);

    // Destructor
    ~Fraction();

    // Set and get functions
    void set(int n, int d);
    int getNumerator();
    int getDenominator();

    // Assignment operator
    Fraction& operator=(const Fraction& other);

    // Arithmetic operators
    Fraction operator+(const Fraction& other);
    Fraction operator-(const Fraction& other);
    Fraction operator*(const Fraction& other);
    Fraction operator/(const Fraction& other);

    // Comparison operators
    bool operator>(const Fraction& other);
    bool operator<(const Fraction& other);
    bool operator>=(const Fraction& other);
    bool operator<=(const Fraction& other);
    bool operator==(const Fraction& other);
    bool operator!=(const Fraction& other);

    // Prefix and postfix increment
    Fraction& operator++();
    Fraction operator++(int);

    // Input and output operators
    friend istream& operator>>(istream& in, Fraction& f);
    friend ostream& operator<<(ostream& out, Fraction& f);
};

#endif
