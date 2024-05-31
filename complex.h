//
// Created by Carlos R. Arias on 5/31/24.
//

#ifndef COMPLEX_OPERATOR_OVERLOAD_COMPLEX_H
#define COMPLEX_OPERATOR_OVERLOAD_COMPLEX_H

#include <string>
using std::string;

class Complex {
private:
    double _real, _imaginary;
public:
    Complex(double real = 0.0, double imaginary = 0.0);
    const Complex& operator=(const Complex& rhs);

    const Complex& operator+=(const Complex& rhs);
    const Complex operator-()const;

    string ToString()const;
    string ToJSON()const;
};

const Complex operator+(const Complex& lhs, const Complex& rhs);


#endif //COMPLEX_OPERATOR_OVERLOAD_COMPLEX_H
