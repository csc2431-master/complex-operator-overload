//
// Created by Carlos R. Arias on 5/31/24.
//

#include "complex.h"

#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Complex::Complex(double real, double imaginary): _real(real), _imaginary(imaginary) {

}

const Complex &Complex::operator=(const Complex &rhs) {
    _real = rhs._real;
    _imaginary = rhs._imaginary;
    return *this;
}

const Complex &Complex::operator+=(const Complex &rhs) {
    _real += rhs._real;
    _imaginary += rhs._imaginary;
    return *this;
}

const Complex Complex::operator-() const {
    return Complex(-_real, -_imaginary);
}

string Complex::ToString() const {
    stringstream ss;
    if (_real == 0) {
        if (_imaginary == 0)
            ss << 0;
        else
            ss << _imaginary << "i";
    }else{
        if (_imaginary == 0)
            ss << _real;
        else
            ss << _real << (_imaginary < 0 ? "" : "+") << _imaginary << "i";
    }
    return ss.str();
}

string Complex::ToJSON() const {
    stringstream ss;
    ss << "{\"real\": " << _real << ", \"imaginary\":" << _imaginary << "}";
    return ss.str();
}

const Complex operator+(const Complex &lhs, const Complex &rhs) {
    return Complex();
}
