# Complex
A class to represent a complex number using operator overload


## Representation

A complex number: $c = a + bi$

The class will represent it using two doubles to model the real and imaginary parts of the complex number.

```c++
class Complex{
private:
    double _real, _imaginary;
public:
    // The rest
    
};
```

## Operations

We will do some, but not all, operations.

Given $c \in \mathbb{C}, p \in \mathbb{C}, q \in \mathbb{C}$

| Operation    | Example
|--------------| --- |
| Assignment   | `c = Complex(1, 2)`|
| Sum | `c = p + q `|
| Addition | `c += q` |
| Minus | `c = -q` |
| Stream Insertion | `cout << c << endl;` |

## Some rules for operator overloading

Given an operator that we want to overload, the operator can be binary or unary. Furthermore, the operator can be overloaded as a member function or not. The number of parameters will depend on these conditions.

| | Member function | Non-member Function |
|-- | -- | -- |
|Unary Operator | No parameters | One parameter |
| Binary Operator | One paramater | Two parameters |

