#include "complex.h"

#include <iostream>
#include <cassert>

using std::cout;
using std::endl;

int main() {
    Complex a, b(1), c(2, 1), d(0, 3), r;
    assert(a.ToString() == "0");
    assert(b.ToString() == "1");
    assert(c.ToString() == "2 + 1i");
    assert(d.ToString() == "3i");

    assert(a.ToJSON() == "{\"real\": 0, \"imaginary\": 0}");
    assert(b.ToJSON() == "{\"real\": 1, \"imaginary\": 0}");
    assert(c.ToJSON() == "{\"real\": 2, \"imaginary\": 1}");
    assert(d.ToJSON() == "{\"real\": 0, \"imaginary\": 3}");


    r = a;
    assert(r.ToString() == "0");

    r = c + d;
    assert(r.ToString() == "2+4i");

    r = -d;
    assert(r.ToString() == "-3i");

    r = Complex(-1, 1);
    r += c;
    assert(r.ToString() == "1+2i");


    return 0;
}
