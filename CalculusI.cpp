// ﷽
// CalculusI.cpp (filename)
// Source: https://github.com/Jauoad
// Copyright (c) 2024 Jauoad


#include <iostream>
#include <cmath>
#include <functional>

using namespace std;

// 1. Derivative of a Function (Definition of the derivative)
double derivative(function<double(double)> f, double x, double h = 1e-7) {
    cout << "Schema of Derivative of a Function:\n";
    cout << "f'(x) = lim h->0 [f(x + h) - f(x)] / h\n\n";
    return (f(x + h) - f(x)) / h;
}

/*
Formula: f'(x) = lim h->0 [f(x + h) - f(x)] / h

Concept:
As h approaches 0, the secant line slope approaches the tangent line slope.

    f(x+h)
       *
      /|
     / |
    /  |
   /   |
  /____|______> x
   f(x)    f(x+h)
*/

// 2. Power Rule for Differentiation
double powerRule(double x, int n) {
    cout << "Schema of Power Rule:\n";
    cout << "d/dx (x^n) = n * x^(n-1)\n";
    return n * pow(x, n - 1);
}

/*
Formula: d/dx (x^n) = n * x^(n-1)

Concept:
This rule differentiates functions of the form x^n.

    |
    |         * (Slope of tangent at x)
    |       *
    |     *
    |   *
    | *
    |_______________> x
*/

// 3. Product Rule for Differentiation
double productRule(function<double(double)> f, function<double(double)> g, double x, double h = 1e-7) {
    double f_prime = derivative(f, x, h);
    double g_prime = derivative(g, x, h);

    cout << "Schema of Product Rule:\n";
    cout << "(f * g)' = f' * g + f * g'\n";
    return f_prime * g(x) + f(x) * g_prime;
}

/*
Formula: (f * g)' = f' * g + f * g'

Concept:
The derivative of the product of two functions f and g is the sum of each function times the derivative of the other.

          (f*g)' = f' * g + f * g'
                |
                |    ____
 f' * g    -->  |   /    \
                |  /______\
                |    g'
*/

// 4. Chain Rule for Differentiation
double chainRule(function<double(double)> dydu, function<double(double)> dudx, double x) {
    cout << "Schema of Chain Rule:\n";
    cout << "dy/dx = dy/du * du/dx\n";
    return dydu(dudx(x)) * derivative(dudx, x);
}

/*
Formula: dy/dx = dy/du * du/dx

Concept:
The chain rule is used when differentiating a composite function.

    dy
    --
    dx    = dy/du * du/dx
    |
    |      [Outer Function]
    |         |
    |         v
    |    (du/dx) ---> (inner function)
*/

// Example usage of these functions
int main() {
    auto f = [](double x) { return pow(x, 2); };  // Function f(x) = x^2
    auto g = [](double x) { return sin(x); };     // Function g(x) = sin(x)

    double x = 2.0;

    cout << "Derivative of f(x) = x^2 at x = 2: " << derivative(f, x) << endl;
    cout << "Power Rule for x^3 at x = 2: " << powerRule(x, 3) << endl;
    cout << "Product Rule for f(x) = x^2 and g(x) = sin(x) at x = 2: " << productRule(f, g, x) << endl;

    auto dydu = [](double u) { return 3 * pow(u, 2); };  // dy/du = 3u^2
    auto dudx = [](double x) { return pow(x, 3); };      // du/dx = x^3
    cout << "Chain Rule for dy/du = 3u^2 and du/dx = x^3 at x = 2: " << chainRule(dydu, dudx, x) << endl;

    return 0;
}
