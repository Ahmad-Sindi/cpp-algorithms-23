// Algorithm Challenge
// 23 – Circle Area Described Around an Arbitrary Triangle

#include <iostream>
#include <cmath> // for sqrt() function
using namespace std;

int main()
{
    float a, b, c;         // sides of the triangle
    const float pi = 3.14; // define pi as a constant

    cout << "Type the three sides of the Arbitrary Triangle:\n";
    cin >> a >> b >> c;

    // Calculate the semi-perimeter (p)
    float p = (a + b + c) / 2;

    // Calculate the radius (R) of the circumscribed circle
    // Formula: R = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)))
    float R = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));

    // Calculate the area of the circle: A = π * R²
    float area = pi * (R * R);

    cout << "The Area of the Circumscribed Circle is: " << area << endl;

    return 0;
}
