#include <iostream>
using namespace std;

class complex
{
    int real;
    int img;

public:
    // Constructor (default and parameterized)
    complex(int r = 0, int i = 0) : real(r), img(i) {}

    // Overloaded operator+ for addition
    complex operator+(const complex &other)
    {
        complex result;
        result.real = real + other.real;
        result.img = img + other.img;
        return result;
    }

    // Overloaded operator* for multiplication
    complex operator*(const complex &other)
    {
        complex result;
        result.real = (real * other.real) - (img * other.img);
        result.img = (real * other.img) + (img * other.real);
        return result;
    }

    // Overloaded >> for input
    friend istream &operator>>(istream &in, complex &other)
    {
        cout << "Enter the real part: ";
        in >> other.real;
        cout << "Enter the imaginary part: ";
        in >> other.img;
        return in;
    }

    // Overloaded << for output
    friend ostream &operator<<(ostream &out, const complex &other)
    {
        out << other.real << " + " << other.img << "i";
        return out;
    }
};

int main()
{
    complex c1, c2, sum, product;

    // Input two complex numbers
    cout << "Enter the first complex number:" << endl;
    cin >> c1;

    cout << "Enter the second complex number:" << endl;
    cin >> c2;

    // Perform addition
    sum = c1 + c2;
    cout << "The sum is: " << sum << endl;

    // Perform multiplication
    product = c1 * c2;
    cout << "The product is: " << product << endl;

    return 0;
}
